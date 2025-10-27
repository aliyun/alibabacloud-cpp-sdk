// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHUPLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHUPLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateBatchUploadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchUploadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Md5List, md5List_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchUploadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Md5List, md5List_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateBatchUploadUrlRequest() = default ;
    CreateBatchUploadUrlRequest(const CreateBatchUploadUrlRequest &) = default ;
    CreateBatchUploadUrlRequest(CreateBatchUploadUrlRequest &&) = default ;
    CreateBatchUploadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchUploadUrlRequest() = default ;
    CreateBatchUploadUrlRequest& operator=(const CreateBatchUploadUrlRequest &) = default ;
    CreateBatchUploadUrlRequest& operator=(CreateBatchUploadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->md5List_ == nullptr
        && return this->type_ == nullptr; };
    // md5List Field Functions 
    bool hasMd5List() const { return this->md5List_ != nullptr;};
    void deleteMd5List() { this->md5List_ = nullptr;};
    inline const vector<string> & md5List() const { DARABONBA_PTR_GET_CONST(md5List_, vector<string>) };
    inline vector<string> md5List() { DARABONBA_PTR_GET(md5List_, vector<string>) };
    inline CreateBatchUploadUrlRequest& setMd5List(const vector<string> & md5List) { DARABONBA_PTR_SET_VALUE(md5List_, md5List) };
    inline CreateBatchUploadUrlRequest& setMd5List(vector<string> && md5List) { DARABONBA_PTR_SET_RVALUE(md5List_, md5List) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateBatchUploadUrlRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The identifiers of files. Only MD5 hash values are supported.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> md5List_ = nullptr;
    // The type of the file. Valid values:
    // 
    // *   **0**: unknown file
    // *   **1**: binary file
    // *   **2**: webshell file
    // *   **4**: script file
    // 
    // > If you do not know the type of the file, set this parameter to **0**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
