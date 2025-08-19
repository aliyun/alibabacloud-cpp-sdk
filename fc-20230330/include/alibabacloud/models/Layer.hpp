// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LAYER_HPP_
#define ALIBABACLOUD_MODELS_LAYER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OutputCodeLocation.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class Layer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Layer& obj) { 
      DARABONBA_PTR_TO_JSON(acl, acl_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(codeChecksum, codeChecksum_);
      DARABONBA_PTR_TO_JSON(codeSize, codeSize_);
      DARABONBA_PTR_TO_JSON(compatibleRuntime, compatibleRuntime_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(layerName, layerName_);
      DARABONBA_PTR_TO_JSON(layerVersionArn, layerVersionArn_);
      DARABONBA_PTR_TO_JSON(license, license_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, Layer& obj) { 
      DARABONBA_PTR_FROM_JSON(acl, acl_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(codeChecksum, codeChecksum_);
      DARABONBA_PTR_FROM_JSON(codeSize, codeSize_);
      DARABONBA_PTR_FROM_JSON(compatibleRuntime, compatibleRuntime_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(layerName, layerName_);
      DARABONBA_PTR_FROM_JSON(layerVersionArn, layerVersionArn_);
      DARABONBA_PTR_FROM_JSON(license, license_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    Layer() = default ;
    Layer(const Layer &) = default ;
    Layer(Layer &&) = default ;
    Layer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Layer() = default ;
    Layer& operator=(const Layer &) = default ;
    Layer& operator=(Layer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acl_ != nullptr
        && this->code_ != nullptr && this->codeChecksum_ != nullptr && this->codeSize_ != nullptr && this->compatibleRuntime_ != nullptr && this->createTime_ != nullptr
        && this->description_ != nullptr && this->layerName_ != nullptr && this->layerVersionArn_ != nullptr && this->license_ != nullptr && this->version_ != nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string acl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline Layer& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline const OutputCodeLocation & code() const { DARABONBA_PTR_GET_CONST(code_, OutputCodeLocation) };
    inline OutputCodeLocation code() { DARABONBA_PTR_GET(code_, OutputCodeLocation) };
    inline Layer& setCode(const OutputCodeLocation & code) { DARABONBA_PTR_SET_VALUE(code_, code) };
    inline Layer& setCode(OutputCodeLocation && code) { DARABONBA_PTR_SET_RVALUE(code_, code) };


    // codeChecksum Field Functions 
    bool hasCodeChecksum() const { return this->codeChecksum_ != nullptr;};
    void deleteCodeChecksum() { this->codeChecksum_ = nullptr;};
    inline string codeChecksum() const { DARABONBA_PTR_GET_DEFAULT(codeChecksum_, "") };
    inline Layer& setCodeChecksum(string codeChecksum) { DARABONBA_PTR_SET_VALUE(codeChecksum_, codeChecksum) };


    // codeSize Field Functions 
    bool hasCodeSize() const { return this->codeSize_ != nullptr;};
    void deleteCodeSize() { this->codeSize_ = nullptr;};
    inline int64_t codeSize() const { DARABONBA_PTR_GET_DEFAULT(codeSize_, 0L) };
    inline Layer& setCodeSize(int64_t codeSize) { DARABONBA_PTR_SET_VALUE(codeSize_, codeSize) };


    // compatibleRuntime Field Functions 
    bool hasCompatibleRuntime() const { return this->compatibleRuntime_ != nullptr;};
    void deleteCompatibleRuntime() { this->compatibleRuntime_ = nullptr;};
    inline const vector<string> & compatibleRuntime() const { DARABONBA_PTR_GET_CONST(compatibleRuntime_, vector<string>) };
    inline vector<string> compatibleRuntime() { DARABONBA_PTR_GET(compatibleRuntime_, vector<string>) };
    inline Layer& setCompatibleRuntime(const vector<string> & compatibleRuntime) { DARABONBA_PTR_SET_VALUE(compatibleRuntime_, compatibleRuntime) };
    inline Layer& setCompatibleRuntime(vector<string> && compatibleRuntime) { DARABONBA_PTR_SET_RVALUE(compatibleRuntime_, compatibleRuntime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Layer& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Layer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // layerName Field Functions 
    bool hasLayerName() const { return this->layerName_ != nullptr;};
    void deleteLayerName() { this->layerName_ = nullptr;};
    inline string layerName() const { DARABONBA_PTR_GET_DEFAULT(layerName_, "") };
    inline Layer& setLayerName(string layerName) { DARABONBA_PTR_SET_VALUE(layerName_, layerName) };


    // layerVersionArn Field Functions 
    bool hasLayerVersionArn() const { return this->layerVersionArn_ != nullptr;};
    void deleteLayerVersionArn() { this->layerVersionArn_ = nullptr;};
    inline string layerVersionArn() const { DARABONBA_PTR_GET_DEFAULT(layerVersionArn_, "") };
    inline Layer& setLayerVersionArn(string layerVersionArn) { DARABONBA_PTR_SET_VALUE(layerVersionArn_, layerVersionArn) };


    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string license() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline Layer& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline Layer& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> acl_ = nullptr;
    std::shared_ptr<OutputCodeLocation> code_ = nullptr;
    std::shared_ptr<string> codeChecksum_ = nullptr;
    std::shared_ptr<int64_t> codeSize_ = nullptr;
    std::shared_ptr<vector<string>> compatibleRuntime_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> layerName_ = nullptr;
    std::shared_ptr<string> layerVersionArn_ = nullptr;
    std::shared_ptr<string> license_ = nullptr;
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
