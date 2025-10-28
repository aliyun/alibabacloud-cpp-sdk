// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEDETAILRESPONSEBODYDATAMETHODSRETURNDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEDETAILRESPONSEBODYDATAMETHODSRETURNDEFINITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceDetailResponseBodyDataMethodsReturnDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceDetailResponseBodyDataMethodsReturnDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceDetailResponseBodyDataMethodsReturnDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetServiceDetailResponseBodyDataMethodsReturnDefinition() = default ;
    GetServiceDetailResponseBodyDataMethodsReturnDefinition(const GetServiceDetailResponseBodyDataMethodsReturnDefinition &) = default ;
    GetServiceDetailResponseBodyDataMethodsReturnDefinition(GetServiceDetailResponseBodyDataMethodsReturnDefinition &&) = default ;
    GetServiceDetailResponseBodyDataMethodsReturnDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceDetailResponseBodyDataMethodsReturnDefinition() = default ;
    GetServiceDetailResponseBodyDataMethodsReturnDefinition& operator=(const GetServiceDetailResponseBodyDataMethodsReturnDefinition &) = default ;
    GetServiceDetailResponseBodyDataMethodsReturnDefinition& operator=(GetServiceDetailResponseBodyDataMethodsReturnDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetServiceDetailResponseBodyDataMethodsReturnDefinition& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceDetailResponseBodyDataMethodsReturnDefinition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the return value.
    std::shared_ptr<string> id_ = nullptr;
    // The type of the response.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
