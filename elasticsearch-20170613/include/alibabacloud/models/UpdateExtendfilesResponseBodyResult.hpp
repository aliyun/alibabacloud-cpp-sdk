// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXTENDFILESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXTENDFILESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateExtendfilesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExtendfilesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExtendfilesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    UpdateExtendfilesResponseBodyResult() = default ;
    UpdateExtendfilesResponseBodyResult(const UpdateExtendfilesResponseBodyResult &) = default ;
    UpdateExtendfilesResponseBodyResult(UpdateExtendfilesResponseBodyResult &&) = default ;
    UpdateExtendfilesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExtendfilesResponseBodyResult() = default ;
    UpdateExtendfilesResponseBodyResult& operator=(const UpdateExtendfilesResponseBodyResult &) = default ;
    UpdateExtendfilesResponseBodyResult& operator=(UpdateExtendfilesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSize_ != nullptr
        && this->name_ != nullptr && this->sourceType_ != nullptr; };
    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline UpdateExtendfilesResponseBodyResult& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateExtendfilesResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateExtendfilesResponseBodyResult& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The size of the driver file. Unit: byte.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The name of the driver file.
    std::shared_ptr<string> name_ = nullptr;
    // The source of the driver file. This parameter is fixed as ORIGIN, which indicates that the driver file is retained.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
