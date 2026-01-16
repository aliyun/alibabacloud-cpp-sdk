// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DICTINFO_HPP_
#define ALIBABACLOUD_MODELS_DICTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DictInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DictInfo& obj) { 
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DictInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DictInfo() = default ;
    DictInfo(const DictInfo &) = default ;
    DictInfo(DictInfo &&) = default ;
    DictInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DictInfo() = default ;
    DictInfo& operator=(const DictInfo &) = default ;
    DictInfo& operator=(DictInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->name_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DictInfo& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DictInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DictInfo& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DictInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int64_t> fileSize_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
