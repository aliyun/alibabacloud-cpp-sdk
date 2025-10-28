// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODYDATARESULTRETURNDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODYDATARESULTRETURNDEFINITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceMethodPageResponseBodyDataResultReturnDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceMethodPageResponseBodyDataResultReturnDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceMethodPageResponseBodyDataResultReturnDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetServiceMethodPageResponseBodyDataResultReturnDefinition() = default ;
    GetServiceMethodPageResponseBodyDataResultReturnDefinition(const GetServiceMethodPageResponseBodyDataResultReturnDefinition &) = default ;
    GetServiceMethodPageResponseBodyDataResultReturnDefinition(GetServiceMethodPageResponseBodyDataResultReturnDefinition &&) = default ;
    GetServiceMethodPageResponseBodyDataResultReturnDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceMethodPageResponseBodyDataResultReturnDefinition() = default ;
    GetServiceMethodPageResponseBodyDataResultReturnDefinition& operator=(const GetServiceMethodPageResponseBodyDataResultReturnDefinition &) = default ;
    GetServiceMethodPageResponseBodyDataResultReturnDefinition& operator=(GetServiceMethodPageResponseBodyDataResultReturnDefinition &&) = default ;
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
    inline GetServiceMethodPageResponseBodyDataResultReturnDefinition& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceMethodPageResponseBodyDataResultReturnDefinition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the return value.
    std::shared_ptr<string> id_ = nullptr;
    // The data format of the response.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
