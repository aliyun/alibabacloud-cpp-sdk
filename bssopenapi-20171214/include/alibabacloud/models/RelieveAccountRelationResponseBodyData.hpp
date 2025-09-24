// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELIEVEACCOUNTRELATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RELIEVEACCOUNTRELATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class RelieveAccountRelationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RelieveAccountRelationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
    };
    friend void from_json(const Darabonba::Json& j, RelieveAccountRelationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
    };
    RelieveAccountRelationResponseBodyData() = default ;
    RelieveAccountRelationResponseBodyData(const RelieveAccountRelationResponseBodyData &) = default ;
    RelieveAccountRelationResponseBodyData(RelieveAccountRelationResponseBodyData &&) = default ;
    RelieveAccountRelationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RelieveAccountRelationResponseBodyData() = default ;
    RelieveAccountRelationResponseBodyData& operator=(const RelieveAccountRelationResponseBodyData &) = default ;
    RelieveAccountRelationResponseBodyData& operator=(RelieveAccountRelationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline RelieveAccountRelationResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


  protected:
    // hostid
    std::shared_ptr<string> hostId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
