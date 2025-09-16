// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTABLEREQUESTDATAPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTABLEREQUESTDATAPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyTableRequestDataProcessConfigParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyTableRequestDataProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTableRequestDataProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(dstField, dstField_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(srcField, srcField_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTableRequestDataProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(dstField, dstField_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(srcField, srcField_);
    };
    ModifyTableRequestDataProcessConfig() = default ;
    ModifyTableRequestDataProcessConfig(const ModifyTableRequestDataProcessConfig &) = default ;
    ModifyTableRequestDataProcessConfig(ModifyTableRequestDataProcessConfig &&) = default ;
    ModifyTableRequestDataProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTableRequestDataProcessConfig() = default ;
    ModifyTableRequestDataProcessConfig& operator=(const ModifyTableRequestDataProcessConfig &) = default ;
    ModifyTableRequestDataProcessConfig& operator=(ModifyTableRequestDataProcessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dstField_ != nullptr
        && this->operator_ != nullptr && this->params_ != nullptr && this->srcField_ != nullptr; };
    // dstField Field Functions 
    bool hasDstField() const { return this->dstField_ != nullptr;};
    void deleteDstField() { this->dstField_ = nullptr;};
    inline string dstField() const { DARABONBA_PTR_GET_DEFAULT(dstField_, "") };
    inline ModifyTableRequestDataProcessConfig& setDstField(string dstField) { DARABONBA_PTR_SET_VALUE(dstField_, dstField) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ModifyTableRequestDataProcessConfig& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const Models::ModifyTableRequestDataProcessConfigParams & params() const { DARABONBA_PTR_GET_CONST(params_, Models::ModifyTableRequestDataProcessConfigParams) };
    inline Models::ModifyTableRequestDataProcessConfigParams params() { DARABONBA_PTR_GET(params_, Models::ModifyTableRequestDataProcessConfigParams) };
    inline ModifyTableRequestDataProcessConfig& setParams(const Models::ModifyTableRequestDataProcessConfigParams & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ModifyTableRequestDataProcessConfig& setParams(Models::ModifyTableRequestDataProcessConfigParams && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // srcField Field Functions 
    bool hasSrcField() const { return this->srcField_ != nullptr;};
    void deleteSrcField() { this->srcField_ = nullptr;};
    inline string srcField() const { DARABONBA_PTR_GET_DEFAULT(srcField_, "") };
    inline ModifyTableRequestDataProcessConfig& setSrcField(string srcField) { DARABONBA_PTR_SET_VALUE(srcField_, srcField) };


  protected:
    // The destination field.
    std::shared_ptr<string> dstField_ = nullptr;
    // The method used to process the field. Valid values: copy and vectorize. A value of copy specifies that the value of the source field is copied to the destination field. A value of vectorize specifies that the value of the source field is vectorized by a vectorization model and the output vector is stored in the destination field.
    std::shared_ptr<string> operator_ = nullptr;
    // The information about the model.
    std::shared_ptr<Models::ModifyTableRequestDataProcessConfigParams> params_ = nullptr;
    // The source field.
    std::shared_ptr<string> srcField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
