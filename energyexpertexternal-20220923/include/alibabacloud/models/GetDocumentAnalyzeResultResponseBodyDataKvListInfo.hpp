// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSEBODYDATAKVLISTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSEBODYDATAKVLISTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocumentAnalyzeResultResponseBodyDataKvListInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentAnalyzeResultResponseBodyDataKvListInfo& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(keyName, keyName_);
      DARABONBA_PTR_TO_JSON(keyValue, keyValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentAnalyzeResultResponseBodyDataKvListInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(keyName, keyName_);
      DARABONBA_PTR_FROM_JSON(keyValue, keyValue_);
    };
    GetDocumentAnalyzeResultResponseBodyDataKvListInfo() = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfo(const GetDocumentAnalyzeResultResponseBodyDataKvListInfo &) = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfo(GetDocumentAnalyzeResultResponseBodyDataKvListInfo &&) = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentAnalyzeResultResponseBodyDataKvListInfo() = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfo& operator=(const GetDocumentAnalyzeResultResponseBodyDataKvListInfo &) = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfo& operator=(GetDocumentAnalyzeResultResponseBodyDataKvListInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr
        && this->keyName_ != nullptr && this->keyValue_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext & context() const { DARABONBA_PTR_GET_CONST(context_, Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext) };
    inline Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext context() { DARABONBA_PTR_GET(context_, Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext) };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfo& setContext(const Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfo& setContext(Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfo& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyValue Field Functions 
    bool hasKeyValue() const { return this->keyValue_ != nullptr;};
    void deleteKeyValue() { this->keyValue_ = nullptr;};
    inline string keyValue() const { DARABONBA_PTR_GET_DEFAULT(keyValue_, "") };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfo& setKeyValue(string keyValue) { DARABONBA_PTR_SET_VALUE(keyValue_, keyValue) };


  protected:
    // Recalled Content
    std::shared_ptr<Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext> context_ = nullptr;
    // Field Key Name
    std::shared_ptr<string> keyName_ = nullptr;
    // Field Key Value
    std::shared_ptr<string> keyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
