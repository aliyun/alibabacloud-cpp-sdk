// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADREQUESTOPTIONPRECHECKPARAM_HPP_
#define ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADREQUESTOPTIONPRECHECKPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InitMultipartFileUploadRequestOptionPreCheckParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitMultipartFileUploadRequestOptionPreCheckParam& obj) { 
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, InitMultipartFileUploadRequestOptionPreCheckParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    InitMultipartFileUploadRequestOptionPreCheckParam() = default ;
    InitMultipartFileUploadRequestOptionPreCheckParam(const InitMultipartFileUploadRequestOptionPreCheckParam &) = default ;
    InitMultipartFileUploadRequestOptionPreCheckParam(InitMultipartFileUploadRequestOptionPreCheckParam &&) = default ;
    InitMultipartFileUploadRequestOptionPreCheckParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitMultipartFileUploadRequestOptionPreCheckParam() = default ;
    InitMultipartFileUploadRequestOptionPreCheckParam& operator=(const InitMultipartFileUploadRequestOptionPreCheckParam &) = default ;
    InitMultipartFileUploadRequestOptionPreCheckParam& operator=(InitMultipartFileUploadRequestOptionPreCheckParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->md5_ == nullptr
        && return this->name_ == nullptr && return this->parentId_ == nullptr && return this->size_ == nullptr; };
    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline InitMultipartFileUploadRequestOptionPreCheckParam& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InitMultipartFileUploadRequestOptionPreCheckParam& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline InitMultipartFileUploadRequestOptionPreCheckParam& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline InitMultipartFileUploadRequestOptionPreCheckParam& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
