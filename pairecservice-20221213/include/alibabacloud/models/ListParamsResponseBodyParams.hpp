// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARAMSRESPONSEBODYPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTPARAMSRESPONSEBODYPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListParamsResponseBodyParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListParamsResponseBodyParams& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParamId, paramId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListParamsResponseBodyParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParamId, paramId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListParamsResponseBodyParams() = default ;
    ListParamsResponseBodyParams(const ListParamsResponseBodyParams &) = default ;
    ListParamsResponseBodyParams(ListParamsResponseBodyParams &&) = default ;
    ListParamsResponseBodyParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListParamsResponseBodyParams() = default ;
    ListParamsResponseBodyParams& operator=(const ListParamsResponseBodyParams &) = default ;
    ListParamsResponseBodyParams& operator=(ListParamsResponseBodyParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environment_ != nullptr
        && this->gmtModifiedTime_ != nullptr && this->name_ != nullptr && this->paramId_ != nullptr && this->value_ != nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline ListParamsResponseBodyParams& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListParamsResponseBodyParams& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListParamsResponseBodyParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paramId Field Functions 
    bool hasParamId() const { return this->paramId_ != nullptr;};
    void deleteParamId() { this->paramId_ = nullptr;};
    inline string paramId() const { DARABONBA_PTR_GET_DEFAULT(paramId_, "") };
    inline ListParamsResponseBodyParams& setParamId(string paramId) { DARABONBA_PTR_SET_VALUE(paramId_, paramId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListParamsResponseBodyParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> environment_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> paramId_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
