// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEAUTHSRESPONSEBODYSERVICEAUTHS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEAUTHSRESPONSEBODYSERVICEAUTHS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListServiceAuthsResponseBodyServiceAuths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceAuthsResponseBodyServiceAuths& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(ownerName, ownerName_);
      DARABONBA_PTR_TO_JSON(ownerStaffId, ownerStaffId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceAuthsResponseBodyServiceAuths& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(ownerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(ownerStaffId, ownerStaffId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListServiceAuthsResponseBodyServiceAuths() = default ;
    ListServiceAuthsResponseBodyServiceAuths(const ListServiceAuthsResponseBodyServiceAuths &) = default ;
    ListServiceAuthsResponseBodyServiceAuths(ListServiceAuthsResponseBodyServiceAuths &&) = default ;
    ListServiceAuthsResponseBodyServiceAuths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceAuthsResponseBodyServiceAuths() = default ;
    ListServiceAuthsResponseBodyServiceAuths& operator=(const ListServiceAuthsResponseBodyServiceAuths &) = default ;
    ListServiceAuthsResponseBodyServiceAuths& operator=(ListServiceAuthsResponseBodyServiceAuths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->ownerName_ == nullptr && return this->ownerStaffId_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListServiceAuthsResponseBodyServiceAuths& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ListServiceAuthsResponseBodyServiceAuths& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerStaffId Field Functions 
    bool hasOwnerStaffId() const { return this->ownerStaffId_ != nullptr;};
    void deleteOwnerStaffId() { this->ownerStaffId_ = nullptr;};
    inline string ownerStaffId() const { DARABONBA_PTR_GET_DEFAULT(ownerStaffId_, "") };
    inline ListServiceAuthsResponseBodyServiceAuths& setOwnerStaffId(string ownerStaffId) { DARABONBA_PTR_SET_VALUE(ownerStaffId_, ownerStaffId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListServiceAuthsResponseBodyServiceAuths& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerStaffId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
