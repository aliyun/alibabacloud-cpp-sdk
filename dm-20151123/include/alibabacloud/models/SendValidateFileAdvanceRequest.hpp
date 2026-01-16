// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVALIDATEFILEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDVALIDATEFILEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SendValidateFileAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendValidateFileAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressColumn, addressColumn_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_TO_JSON(HasHeaderRow, hasHeaderRow_);
      DARABONBA_PTR_TO_JSON(RemoveDuplicate, removeDuplicate_);
    };
    friend void from_json(const Darabonba::Json& j, SendValidateFileAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressColumn, addressColumn_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_FROM_JSON(HasHeaderRow, hasHeaderRow_);
      DARABONBA_PTR_FROM_JSON(RemoveDuplicate, removeDuplicate_);
    };
    SendValidateFileAdvanceRequest() = default ;
    SendValidateFileAdvanceRequest(const SendValidateFileAdvanceRequest &) = default ;
    SendValidateFileAdvanceRequest(SendValidateFileAdvanceRequest &&) = default ;
    SendValidateFileAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendValidateFileAdvanceRequest() = default ;
    SendValidateFileAdvanceRequest& operator=(const SendValidateFileAdvanceRequest &) = default ;
    SendValidateFileAdvanceRequest& operator=(SendValidateFileAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressColumn_ == nullptr
        && this->fileName_ == nullptr && this->fileUrlObject_ == nullptr && this->hasHeaderRow_ == nullptr && this->removeDuplicate_ == nullptr; };
    // addressColumn Field Functions 
    bool hasAddressColumn() const { return this->addressColumn_ != nullptr;};
    void deleteAddressColumn() { this->addressColumn_ = nullptr;};
    inline int32_t getAddressColumn() const { DARABONBA_PTR_GET_DEFAULT(addressColumn_, 0) };
    inline SendValidateFileAdvanceRequest& setAddressColumn(int32_t addressColumn) { DARABONBA_PTR_SET_VALUE(addressColumn_, addressColumn) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SendValidateFileAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline SendValidateFileAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // hasHeaderRow Field Functions 
    bool hasHasHeaderRow() const { return this->hasHeaderRow_ != nullptr;};
    void deleteHasHeaderRow() { this->hasHeaderRow_ = nullptr;};
    inline bool getHasHeaderRow() const { DARABONBA_PTR_GET_DEFAULT(hasHeaderRow_, false) };
    inline SendValidateFileAdvanceRequest& setHasHeaderRow(bool hasHeaderRow) { DARABONBA_PTR_SET_VALUE(hasHeaderRow_, hasHeaderRow) };


    // removeDuplicate Field Functions 
    bool hasRemoveDuplicate() const { return this->removeDuplicate_ != nullptr;};
    void deleteRemoveDuplicate() { this->removeDuplicate_ = nullptr;};
    inline bool getRemoveDuplicate() const { DARABONBA_PTR_GET_DEFAULT(removeDuplicate_, false) };
    inline SendValidateFileAdvanceRequest& setRemoveDuplicate(bool removeDuplicate) { DARABONBA_PTR_SET_VALUE(removeDuplicate_, removeDuplicate) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> addressColumn_ {};
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // This parameter is required.
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    // This parameter is required.
    shared_ptr<bool> hasHeaderRow_ {};
    // This parameter is required.
    shared_ptr<bool> removeDuplicate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
