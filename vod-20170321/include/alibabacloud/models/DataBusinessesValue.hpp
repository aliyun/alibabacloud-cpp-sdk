// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABUSINESSESVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATABUSINESSESVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataBusinessesValueSdkCodes.hpp>
#include <alibabacloud/models/DataBusinessesValueSdkFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DataBusinessesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataBusinessesValue& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Sname, sname_);
      DARABONBA_PTR_TO_JSON(SdkCodes, sdkCodes_);
      DARABONBA_PTR_TO_JSON(SdkFeatures, sdkFeatures_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(IceOpen, iceOpen_);
      DARABONBA_PTR_TO_JSON(SupportPlatform, supportPlatform_);
      DARABONBA_PTR_TO_JSON(FunctionDesc, functionDesc_);
      DARABONBA_PTR_TO_JSON(ProductDesc, productDesc_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Authorized, authorized_);
      DARABONBA_PTR_TO_JSON(AuthorizedApp, authorizedApp_);
    };
    friend void from_json(const Darabonba::Json& j, DataBusinessesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Sname, sname_);
      DARABONBA_PTR_FROM_JSON(SdkCodes, sdkCodes_);
      DARABONBA_PTR_FROM_JSON(SdkFeatures, sdkFeatures_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(IceOpen, iceOpen_);
      DARABONBA_PTR_FROM_JSON(SupportPlatform, supportPlatform_);
      DARABONBA_PTR_FROM_JSON(FunctionDesc, functionDesc_);
      DARABONBA_PTR_FROM_JSON(ProductDesc, productDesc_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
      DARABONBA_PTR_FROM_JSON(AuthorizedApp, authorizedApp_);
    };
    DataBusinessesValue() = default ;
    DataBusinessesValue(const DataBusinessesValue &) = default ;
    DataBusinessesValue(DataBusinessesValue &&) = default ;
    DataBusinessesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataBusinessesValue() = default ;
    DataBusinessesValue& operator=(const DataBusinessesValue &) = default ;
    DataBusinessesValue& operator=(DataBusinessesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->cname_ != nullptr && this->sname_ != nullptr && this->sdkCodes_ != nullptr && this->sdkFeatures_ != nullptr
        && this->version_ != nullptr && this->iceOpen_ != nullptr && this->supportPlatform_ != nullptr && this->functionDesc_ != nullptr && this->productDesc_ != nullptr
        && this->size_ != nullptr && this->authorized_ != nullptr && this->authorizedApp_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DataBusinessesValue& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataBusinessesValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DataBusinessesValue& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // sname Field Functions 
    bool hasSname() const { return this->sname_ != nullptr;};
    void deleteSname() { this->sname_ = nullptr;};
    inline string sname() const { DARABONBA_PTR_GET_DEFAULT(sname_, "") };
    inline DataBusinessesValue& setSname(string sname) { DARABONBA_PTR_SET_VALUE(sname_, sname) };


    // sdkCodes Field Functions 
    bool hasSdkCodes() const { return this->sdkCodes_ != nullptr;};
    void deleteSdkCodes() { this->sdkCodes_ = nullptr;};
    inline const vector<DataBusinessesValueSdkCodes> & sdkCodes() const { DARABONBA_PTR_GET_CONST(sdkCodes_, vector<DataBusinessesValueSdkCodes>) };
    inline vector<DataBusinessesValueSdkCodes> sdkCodes() { DARABONBA_PTR_GET(sdkCodes_, vector<DataBusinessesValueSdkCodes>) };
    inline DataBusinessesValue& setSdkCodes(const vector<DataBusinessesValueSdkCodes> & sdkCodes) { DARABONBA_PTR_SET_VALUE(sdkCodes_, sdkCodes) };
    inline DataBusinessesValue& setSdkCodes(vector<DataBusinessesValueSdkCodes> && sdkCodes) { DARABONBA_PTR_SET_RVALUE(sdkCodes_, sdkCodes) };


    // sdkFeatures Field Functions 
    bool hasSdkFeatures() const { return this->sdkFeatures_ != nullptr;};
    void deleteSdkFeatures() { this->sdkFeatures_ = nullptr;};
    inline const vector<DataBusinessesValueSdkFeatures> & sdkFeatures() const { DARABONBA_PTR_GET_CONST(sdkFeatures_, vector<DataBusinessesValueSdkFeatures>) };
    inline vector<DataBusinessesValueSdkFeatures> sdkFeatures() { DARABONBA_PTR_GET(sdkFeatures_, vector<DataBusinessesValueSdkFeatures>) };
    inline DataBusinessesValue& setSdkFeatures(const vector<DataBusinessesValueSdkFeatures> & sdkFeatures) { DARABONBA_PTR_SET_VALUE(sdkFeatures_, sdkFeatures) };
    inline DataBusinessesValue& setSdkFeatures(vector<DataBusinessesValueSdkFeatures> && sdkFeatures) { DARABONBA_PTR_SET_RVALUE(sdkFeatures_, sdkFeatures) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DataBusinessesValue& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // iceOpen Field Functions 
    bool hasIceOpen() const { return this->iceOpen_ != nullptr;};
    void deleteIceOpen() { this->iceOpen_ = nullptr;};
    inline int32_t iceOpen() const { DARABONBA_PTR_GET_DEFAULT(iceOpen_, 0) };
    inline DataBusinessesValue& setIceOpen(int32_t iceOpen) { DARABONBA_PTR_SET_VALUE(iceOpen_, iceOpen) };


    // supportPlatform Field Functions 
    bool hasSupportPlatform() const { return this->supportPlatform_ != nullptr;};
    void deleteSupportPlatform() { this->supportPlatform_ = nullptr;};
    inline int32_t supportPlatform() const { DARABONBA_PTR_GET_DEFAULT(supportPlatform_, 0) };
    inline DataBusinessesValue& setSupportPlatform(int32_t supportPlatform) { DARABONBA_PTR_SET_VALUE(supportPlatform_, supportPlatform) };


    // functionDesc Field Functions 
    bool hasFunctionDesc() const { return this->functionDesc_ != nullptr;};
    void deleteFunctionDesc() { this->functionDesc_ = nullptr;};
    inline string functionDesc() const { DARABONBA_PTR_GET_DEFAULT(functionDesc_, "") };
    inline DataBusinessesValue& setFunctionDesc(string functionDesc) { DARABONBA_PTR_SET_VALUE(functionDesc_, functionDesc) };


    // productDesc Field Functions 
    bool hasProductDesc() const { return this->productDesc_ != nullptr;};
    void deleteProductDesc() { this->productDesc_ = nullptr;};
    inline string productDesc() const { DARABONBA_PTR_GET_DEFAULT(productDesc_, "") };
    inline DataBusinessesValue& setProductDesc(string productDesc) { DARABONBA_PTR_SET_VALUE(productDesc_, productDesc) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DataBusinessesValue& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // authorized Field Functions 
    bool hasAuthorized() const { return this->authorized_ != nullptr;};
    void deleteAuthorized() { this->authorized_ = nullptr;};
    inline int32_t authorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, 0) };
    inline DataBusinessesValue& setAuthorized(int32_t authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


    // authorizedApp Field Functions 
    bool hasAuthorizedApp() const { return this->authorizedApp_ != nullptr;};
    void deleteAuthorizedApp() { this->authorizedApp_ = nullptr;};
    inline const vector<string> & authorizedApp() const { DARABONBA_PTR_GET_CONST(authorizedApp_, vector<string>) };
    inline vector<string> authorizedApp() { DARABONBA_PTR_GET(authorizedApp_, vector<string>) };
    inline DataBusinessesValue& setAuthorizedApp(const vector<string> & authorizedApp) { DARABONBA_PTR_SET_VALUE(authorizedApp_, authorizedApp) };
    inline DataBusinessesValue& setAuthorizedApp(vector<string> && authorizedApp) { DARABONBA_PTR_SET_RVALUE(authorizedApp_, authorizedApp) };


  protected:
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> cname_ = nullptr;
    std::shared_ptr<string> sname_ = nullptr;
    std::shared_ptr<vector<DataBusinessesValueSdkCodes>> sdkCodes_ = nullptr;
    std::shared_ptr<vector<DataBusinessesValueSdkFeatures>> sdkFeatures_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<int32_t> iceOpen_ = nullptr;
    std::shared_ptr<int32_t> supportPlatform_ = nullptr;
    std::shared_ptr<string> functionDesc_ = nullptr;
    std::shared_ptr<string> productDesc_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
    std::shared_ptr<int32_t> authorized_ = nullptr;
    std::shared_ptr<vector<string>> authorizedApp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
