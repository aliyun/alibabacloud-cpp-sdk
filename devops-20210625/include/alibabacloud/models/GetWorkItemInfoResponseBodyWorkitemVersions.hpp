// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEMVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEMVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemInfoResponseBodyWorkitemVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemInfoResponseBodyWorkitemVersions& obj) { 
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemInfoResponseBodyWorkitemVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetWorkItemInfoResponseBodyWorkitemVersions() = default ;
    GetWorkItemInfoResponseBodyWorkitemVersions(const GetWorkItemInfoResponseBodyWorkitemVersions &) = default ;
    GetWorkItemInfoResponseBodyWorkitemVersions(GetWorkItemInfoResponseBodyWorkitemVersions &&) = default ;
    GetWorkItemInfoResponseBodyWorkitemVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemInfoResponseBodyWorkitemVersions() = default ;
    GetWorkItemInfoResponseBodyWorkitemVersions& operator=(const GetWorkItemInfoResponseBodyWorkitemVersions &) = default ;
    GetWorkItemInfoResponseBodyWorkitemVersions& operator=(GetWorkItemInfoResponseBodyWorkitemVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr
        && return this->name_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemVersions& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkItemInfoResponseBodyWorkitemVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
