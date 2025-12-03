// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEMTAGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEMTAGDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemInfoResponseBodyWorkitemTagDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemInfoResponseBodyWorkitemTagDetails& obj) { 
      DARABONBA_PTR_TO_JSON(color, color_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemInfoResponseBodyWorkitemTagDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(color, color_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetWorkItemInfoResponseBodyWorkitemTagDetails() = default ;
    GetWorkItemInfoResponseBodyWorkitemTagDetails(const GetWorkItemInfoResponseBodyWorkitemTagDetails &) = default ;
    GetWorkItemInfoResponseBodyWorkitemTagDetails(GetWorkItemInfoResponseBodyWorkitemTagDetails &&) = default ;
    GetWorkItemInfoResponseBodyWorkitemTagDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemInfoResponseBodyWorkitemTagDetails() = default ;
    GetWorkItemInfoResponseBodyWorkitemTagDetails& operator=(const GetWorkItemInfoResponseBodyWorkitemTagDetails &) = default ;
    GetWorkItemInfoResponseBodyWorkitemTagDetails& operator=(GetWorkItemInfoResponseBodyWorkitemTagDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->color_ == nullptr
        && return this->identifier_ == nullptr && return this->name_ == nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemTagDetails& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemTagDetails& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemTagDetails& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> color_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
