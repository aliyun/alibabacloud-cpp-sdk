// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATADIALOGUESDIALOGUEDELTASDELTA_HPP_
#define ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATADIALOGUESDIALOGUEDELTASDELTA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource.hpp>
#include <alibabacloud/models/GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta() = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta(const GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta &) = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta(GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta &&) = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta() = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta& operator=(const GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta &) = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta& operator=(GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && return this->target_ == nullptr && return this->type_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource) };
    inline Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource source() { DARABONBA_PTR_GET(source_, Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta& setSource(const Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta& setSource(Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget) };
    inline Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget target() { DARABONBA_PTR_GET(target_, Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta& setTarget(const Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta& setTarget(Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaSource> source_ = nullptr;
    std::shared_ptr<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDeltaTarget> target_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
