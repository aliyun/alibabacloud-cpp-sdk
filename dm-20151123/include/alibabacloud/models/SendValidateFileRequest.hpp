// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVALIDATEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDVALIDATEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SendValidateFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendValidateFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressColumn, addressColumn_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(HasHeaderRow, hasHeaderRow_);
      DARABONBA_PTR_TO_JSON(RemoveDuplicate, removeDuplicate_);
    };
    friend void from_json(const Darabonba::Json& j, SendValidateFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressColumn, addressColumn_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(HasHeaderRow, hasHeaderRow_);
      DARABONBA_PTR_FROM_JSON(RemoveDuplicate, removeDuplicate_);
    };
    SendValidateFileRequest() = default ;
    SendValidateFileRequest(const SendValidateFileRequest &) = default ;
    SendValidateFileRequest(SendValidateFileRequest &&) = default ;
    SendValidateFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendValidateFileRequest() = default ;
    SendValidateFileRequest& operator=(const SendValidateFileRequest &) = default ;
    SendValidateFileRequest& operator=(SendValidateFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressColumn_ == nullptr
        && this->fileName_ == nullptr && this->fileUrl_ == nullptr && this->hasHeaderRow_ == nullptr && this->removeDuplicate_ == nullptr; };
    // addressColumn Field Functions 
    bool hasAddressColumn() const { return this->addressColumn_ != nullptr;};
    void deleteAddressColumn() { this->addressColumn_ = nullptr;};
    inline int32_t getAddressColumn() const { DARABONBA_PTR_GET_DEFAULT(addressColumn_, 0) };
    inline SendValidateFileRequest& setAddressColumn(int32_t addressColumn) { DARABONBA_PTR_SET_VALUE(addressColumn_, addressColumn) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SendValidateFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SendValidateFileRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // hasHeaderRow Field Functions 
    bool hasHasHeaderRow() const { return this->hasHeaderRow_ != nullptr;};
    void deleteHasHeaderRow() { this->hasHeaderRow_ = nullptr;};
    inline bool getHasHeaderRow() const { DARABONBA_PTR_GET_DEFAULT(hasHeaderRow_, false) };
    inline SendValidateFileRequest& setHasHeaderRow(bool hasHeaderRow) { DARABONBA_PTR_SET_VALUE(hasHeaderRow_, hasHeaderRow) };


    // removeDuplicate Field Functions 
    bool hasRemoveDuplicate() const { return this->removeDuplicate_ != nullptr;};
    void deleteRemoveDuplicate() { this->removeDuplicate_ = nullptr;};
    inline bool getRemoveDuplicate() const { DARABONBA_PTR_GET_DEFAULT(removeDuplicate_, false) };
    inline SendValidateFileRequest& setRemoveDuplicate(bool removeDuplicate) { DARABONBA_PTR_SET_VALUE(removeDuplicate_, removeDuplicate) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> addressColumn_ {};
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // This parameter is required.
    shared_ptr<string> fileUrl_ {};
    // This parameter is required.
    shared_ptr<bool> hasHeaderRow_ {};
    // This parameter is required.
    shared_ptr<bool> removeDuplicate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
