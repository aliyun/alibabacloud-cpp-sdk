// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSREQUESTFILEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_ADDFILESFROMAUTHORIZEDOSSREQUESTFILEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddFilesFromAuthorizedOssRequestFileDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilesFromAuthorizedOssRequestFileDetails& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilesFromAuthorizedOssRequestFileDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
    };
    AddFilesFromAuthorizedOssRequestFileDetails() = default ;
    AddFilesFromAuthorizedOssRequestFileDetails(const AddFilesFromAuthorizedOssRequestFileDetails &) = default ;
    AddFilesFromAuthorizedOssRequestFileDetails(AddFilesFromAuthorizedOssRequestFileDetails &&) = default ;
    AddFilesFromAuthorizedOssRequestFileDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilesFromAuthorizedOssRequestFileDetails() = default ;
    AddFilesFromAuthorizedOssRequestFileDetails& operator=(const AddFilesFromAuthorizedOssRequestFileDetails &) = default ;
    AddFilesFromAuthorizedOssRequestFileDetails& operator=(AddFilesFromAuthorizedOssRequestFileDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->ossKey_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline AddFilesFromAuthorizedOssRequestFileDetails& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline AddFilesFromAuthorizedOssRequestFileDetails& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ossKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
