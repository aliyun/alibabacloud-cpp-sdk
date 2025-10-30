// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeleteCustVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(dataVersion, dataVersion_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(variableId, variableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(dataVersion, dataVersion_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(variableId, variableId_);
    };
    DeleteCustVariableRequest() = default ;
    DeleteCustVariableRequest(const DeleteCustVariableRequest &) = default ;
    DeleteCustVariableRequest(DeleteCustVariableRequest &&) = default ;
    DeleteCustVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustVariableRequest() = default ;
    DeleteCustVariableRequest& operator=(const DeleteCustVariableRequest &) = default ;
    DeleteCustVariableRequest& operator=(DeleteCustVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->createType_ == nullptr && return this->dataVersion_ == nullptr && return this->regId_ == nullptr && return this->variableId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteCustVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline DeleteCustVariableRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // dataVersion Field Functions 
    bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
    void deleteDataVersion() { this->dataVersion_ = nullptr;};
    inline int64_t dataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, 0L) };
    inline DeleteCustVariableRequest& setDataVersion(int64_t dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DeleteCustVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // variableId Field Functions 
    bool hasVariableId() const { return this->variableId_ != nullptr;};
    void deleteVariableId() { this->variableId_ = nullptr;};
    inline string variableId() const { DARABONBA_PTR_GET_DEFAULT(variableId_, "") };
    inline DeleteCustVariableRequest& setVariableId(string variableId) { DARABONBA_PTR_SET_VALUE(variableId_, variableId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Creation type
    std::shared_ptr<string> createType_ = nullptr;
    // Data version.
    std::shared_ptr<int64_t> dataVersion_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Variable ID
    std::shared_ptr<string> variableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
