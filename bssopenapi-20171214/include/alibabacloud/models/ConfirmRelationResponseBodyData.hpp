// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMRELATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMRELATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ConfirmRelationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmRelationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmRelationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
    };
    ConfirmRelationResponseBodyData() = default ;
    ConfirmRelationResponseBodyData(const ConfirmRelationResponseBodyData &) = default ;
    ConfirmRelationResponseBodyData(ConfirmRelationResponseBodyData &&) = default ;
    ConfirmRelationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmRelationResponseBodyData() = default ;
    ConfirmRelationResponseBodyData& operator=(const ConfirmRelationResponseBodyData &) = default ;
    ConfirmRelationResponseBodyData& operator=(ConfirmRelationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ConfirmRelationResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


  protected:
    // HostId
    std::shared_ptr<string> hostId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
