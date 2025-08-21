// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOTIKDICTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOTIKDICTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateHotIkDictsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHotIkDictsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHotIkDictsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UpdateHotIkDictsResponseBodyResult() = default ;
    UpdateHotIkDictsResponseBodyResult(const UpdateHotIkDictsResponseBodyResult &) = default ;
    UpdateHotIkDictsResponseBodyResult(UpdateHotIkDictsResponseBodyResult &&) = default ;
    UpdateHotIkDictsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHotIkDictsResponseBodyResult() = default ;
    UpdateHotIkDictsResponseBodyResult& operator=(const UpdateHotIkDictsResponseBodyResult &) = default ;
    UpdateHotIkDictsResponseBodyResult& operator=(UpdateHotIkDictsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSize_ != nullptr
        && this->name_ != nullptr && this->sourceType_ != nullptr && this->type_ != nullptr; };
    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline UpdateHotIkDictsResponseBodyResult& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateHotIkDictsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateHotIkDictsResponseBodyResult& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateHotIkDictsResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The size of the dictionary file. Unit: bytes.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The name of the dictionary file.
    std::shared_ptr<string> name_ = nullptr;
    // The source type of the dictionary file. Valid values:
    // 
    // *   OSS
    // *   ORIGIN
    std::shared_ptr<string> sourceType_ = nullptr;
    // The type of the dictionaries. Valid values:
    // 
    // *   MAIN: IK main dictionary
    // *   STOP: IK stopword list
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
