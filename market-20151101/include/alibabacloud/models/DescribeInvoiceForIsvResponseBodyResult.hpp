// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvoiceForIsvResponseBodyResultEvaluateList.hpp>
#include <alibabacloud/models/DescribeInvoiceForIsvResponseBodyResultInvoiceList.hpp>
#include <alibabacloud/models/DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto.hpp>
#include <alibabacloud/models/DescribeInvoiceForIsvResponseBodyResultUserAddressDto.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInvoiceForIsvResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvoiceForIsvResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(CreateTimeStr, createTimeStr_);
      DARABONBA_PTR_TO_JSON(EvaluateList, evaluateList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InvoiceId, invoiceId_);
      DARABONBA_PTR_TO_JSON(InvoiceList, invoiceList_);
      DARABONBA_PTR_TO_JSON(MaterialType, materialType_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTimeStr, modifiedTimeStr_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(ReceiptUserInfoDto, receiptUserInfoDto_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserAddressDto, userAddressDto_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvoiceForIsvResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStr, createTimeStr_);
      DARABONBA_PTR_FROM_JSON(EvaluateList, evaluateList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InvoiceId, invoiceId_);
      DARABONBA_PTR_FROM_JSON(InvoiceList, invoiceList_);
      DARABONBA_PTR_FROM_JSON(MaterialType, materialType_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimeStr, modifiedTimeStr_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(ReceiptUserInfoDto, receiptUserInfoDto_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserAddressDto, userAddressDto_);
    };
    DescribeInvoiceForIsvResponseBodyResult() = default ;
    DescribeInvoiceForIsvResponseBodyResult(const DescribeInvoiceForIsvResponseBodyResult &) = default ;
    DescribeInvoiceForIsvResponseBodyResult(DescribeInvoiceForIsvResponseBodyResult &&) = default ;
    DescribeInvoiceForIsvResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvoiceForIsvResponseBodyResult() = default ;
    DescribeInvoiceForIsvResponseBodyResult& operator=(const DescribeInvoiceForIsvResponseBodyResult &) = default ;
    DescribeInvoiceForIsvResponseBodyResult& operator=(DescribeInvoiceForIsvResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunPk_ != nullptr
        && this->createTimeStr_ != nullptr && this->evaluateList_ != nullptr && this->id_ != nullptr && this->invoiceId_ != nullptr && this->invoiceList_ != nullptr
        && this->materialType_ != nullptr && this->modifiedTime_ != nullptr && this->modifiedTimeStr_ != nullptr && this->price_ != nullptr && this->receiptUserInfoDto_ != nullptr
        && this->status_ != nullptr && this->title_ != nullptr && this->type_ != nullptr && this->userAddressDto_ != nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // createTimeStr Field Functions 
    bool hasCreateTimeStr() const { return this->createTimeStr_ != nullptr;};
    void deleteCreateTimeStr() { this->createTimeStr_ = nullptr;};
    inline string createTimeStr() const { DARABONBA_PTR_GET_DEFAULT(createTimeStr_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setCreateTimeStr(string createTimeStr) { DARABONBA_PTR_SET_VALUE(createTimeStr_, createTimeStr) };


    // evaluateList Field Functions 
    bool hasEvaluateList() const { return this->evaluateList_ != nullptr;};
    void deleteEvaluateList() { this->evaluateList_ = nullptr;};
    inline const vector<Models::DescribeInvoiceForIsvResponseBodyResultEvaluateList> & evaluateList() const { DARABONBA_PTR_GET_CONST(evaluateList_, vector<Models::DescribeInvoiceForIsvResponseBodyResultEvaluateList>) };
    inline vector<Models::DescribeInvoiceForIsvResponseBodyResultEvaluateList> evaluateList() { DARABONBA_PTR_GET(evaluateList_, vector<Models::DescribeInvoiceForIsvResponseBodyResultEvaluateList>) };
    inline DescribeInvoiceForIsvResponseBodyResult& setEvaluateList(const vector<Models::DescribeInvoiceForIsvResponseBodyResultEvaluateList> & evaluateList) { DARABONBA_PTR_SET_VALUE(evaluateList_, evaluateList) };
    inline DescribeInvoiceForIsvResponseBodyResult& setEvaluateList(vector<Models::DescribeInvoiceForIsvResponseBodyResultEvaluateList> && evaluateList) { DARABONBA_PTR_SET_RVALUE(evaluateList_, evaluateList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoiceId Field Functions 
    bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
    void deleteInvoiceId() { this->invoiceId_ = nullptr;};
    inline string invoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setInvoiceId(string invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


    // invoiceList Field Functions 
    bool hasInvoiceList() const { return this->invoiceList_ != nullptr;};
    void deleteInvoiceList() { this->invoiceList_ = nullptr;};
    inline const vector<Models::DescribeInvoiceForIsvResponseBodyResultInvoiceList> & invoiceList() const { DARABONBA_PTR_GET_CONST(invoiceList_, vector<Models::DescribeInvoiceForIsvResponseBodyResultInvoiceList>) };
    inline vector<Models::DescribeInvoiceForIsvResponseBodyResultInvoiceList> invoiceList() { DARABONBA_PTR_GET(invoiceList_, vector<Models::DescribeInvoiceForIsvResponseBodyResultInvoiceList>) };
    inline DescribeInvoiceForIsvResponseBodyResult& setInvoiceList(const vector<Models::DescribeInvoiceForIsvResponseBodyResultInvoiceList> & invoiceList) { DARABONBA_PTR_SET_VALUE(invoiceList_, invoiceList) };
    inline DescribeInvoiceForIsvResponseBodyResult& setInvoiceList(vector<Models::DescribeInvoiceForIsvResponseBodyResultInvoiceList> && invoiceList) { DARABONBA_PTR_SET_RVALUE(invoiceList_, invoiceList) };


    // materialType Field Functions 
    bool hasMaterialType() const { return this->materialType_ != nullptr;};
    void deleteMaterialType() { this->materialType_ = nullptr;};
    inline string materialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifiedTimeStr Field Functions 
    bool hasModifiedTimeStr() const { return this->modifiedTimeStr_ != nullptr;};
    void deleteModifiedTimeStr() { this->modifiedTimeStr_ = nullptr;};
    inline string modifiedTimeStr() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeStr_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setModifiedTimeStr(string modifiedTimeStr) { DARABONBA_PTR_SET_VALUE(modifiedTimeStr_, modifiedTimeStr) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline string price() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // receiptUserInfoDto Field Functions 
    bool hasReceiptUserInfoDto() const { return this->receiptUserInfoDto_ != nullptr;};
    void deleteReceiptUserInfoDto() { this->receiptUserInfoDto_ = nullptr;};
    inline const Models::DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto & receiptUserInfoDto() const { DARABONBA_PTR_GET_CONST(receiptUserInfoDto_, Models::DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto) };
    inline Models::DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto receiptUserInfoDto() { DARABONBA_PTR_GET(receiptUserInfoDto_, Models::DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto) };
    inline DescribeInvoiceForIsvResponseBodyResult& setReceiptUserInfoDto(const Models::DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto & receiptUserInfoDto) { DARABONBA_PTR_SET_VALUE(receiptUserInfoDto_, receiptUserInfoDto) };
    inline DescribeInvoiceForIsvResponseBodyResult& setReceiptUserInfoDto(Models::DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto && receiptUserInfoDto) { DARABONBA_PTR_SET_RVALUE(receiptUserInfoDto_, receiptUserInfoDto) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeInvoiceForIsvResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userAddressDto Field Functions 
    bool hasUserAddressDto() const { return this->userAddressDto_ != nullptr;};
    void deleteUserAddressDto() { this->userAddressDto_ = nullptr;};
    inline const Models::DescribeInvoiceForIsvResponseBodyResultUserAddressDto & userAddressDto() const { DARABONBA_PTR_GET_CONST(userAddressDto_, Models::DescribeInvoiceForIsvResponseBodyResultUserAddressDto) };
    inline Models::DescribeInvoiceForIsvResponseBodyResultUserAddressDto userAddressDto() { DARABONBA_PTR_GET(userAddressDto_, Models::DescribeInvoiceForIsvResponseBodyResultUserAddressDto) };
    inline DescribeInvoiceForIsvResponseBodyResult& setUserAddressDto(const Models::DescribeInvoiceForIsvResponseBodyResultUserAddressDto & userAddressDto) { DARABONBA_PTR_SET_VALUE(userAddressDto_, userAddressDto) };
    inline DescribeInvoiceForIsvResponseBodyResult& setUserAddressDto(Models::DescribeInvoiceForIsvResponseBodyResultUserAddressDto && userAddressDto) { DARABONBA_PTR_SET_RVALUE(userAddressDto_, userAddressDto) };


  protected:
    std::shared_ptr<string> aliyunPk_ = nullptr;
    std::shared_ptr<string> createTimeStr_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInvoiceForIsvResponseBodyResultEvaluateList>> evaluateList_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> invoiceId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInvoiceForIsvResponseBodyResultInvoiceList>> invoiceList_ = nullptr;
    std::shared_ptr<string> materialType_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> modifiedTimeStr_ = nullptr;
    std::shared_ptr<string> price_ = nullptr;
    std::shared_ptr<Models::DescribeInvoiceForIsvResponseBodyResultReceiptUserInfoDto> receiptUserInfoDto_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::DescribeInvoiceForIsvResponseBodyResultUserAddressDto> userAddressDto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
