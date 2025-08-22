// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYSTACKINFOEXTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYSTACKINFOEXTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetStackResponseBodyStackInfoExtInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBodyStackInfoExtInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBodyStackInfoExtInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetStackResponseBodyStackInfoExtInfo() = default ;
    GetStackResponseBodyStackInfoExtInfo(const GetStackResponseBodyStackInfoExtInfo &) = default ;
    GetStackResponseBodyStackInfoExtInfo(GetStackResponseBodyStackInfoExtInfo &&) = default ;
    GetStackResponseBodyStackInfoExtInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBodyStackInfoExtInfo() = default ;
    GetStackResponseBodyStackInfoExtInfo& operator=(const GetStackResponseBodyStackInfoExtInfo &) = default ;
    GetStackResponseBodyStackInfoExtInfo& operator=(GetStackResponseBodyStackInfoExtInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->info_ != nullptr
        && this->type_ != nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline GetStackResponseBodyStackInfoExtInfo& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetStackResponseBodyStackInfoExtInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The content of the custom parameter.
    std::shared_ptr<string> info_ = nullptr;
    // The type of the custom parameter.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
