// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDACCOUNTRELATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDACCOUNTRELATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class AddAccountRelationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAccountRelationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAccountRelationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
    };
    AddAccountRelationResponseBodyData() = default ;
    AddAccountRelationResponseBodyData(const AddAccountRelationResponseBodyData &) = default ;
    AddAccountRelationResponseBodyData(AddAccountRelationResponseBodyData &&) = default ;
    AddAccountRelationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAccountRelationResponseBodyData() = default ;
    AddAccountRelationResponseBodyData& operator=(const AddAccountRelationResponseBodyData &) = default ;
    AddAccountRelationResponseBodyData& operator=(AddAccountRelationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr
        && this->relationId_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline AddAccountRelationResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline int64_t relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
    inline AddAccountRelationResponseBodyData& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


  protected:
    // The IP address of the request
    std::shared_ptr<string> hostId_ = nullptr;
    // The ID of the financial relationship.
    std::shared_ptr<int64_t> relationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
