// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHAVIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHAVIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteHaVipsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHaVipsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HaVipIds, haVipIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHaVipsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVipIds, haVipIds_);
    };
    DeleteHaVipsRequest() = default ;
    DeleteHaVipsRequest(const DeleteHaVipsRequest &) = default ;
    DeleteHaVipsRequest(DeleteHaVipsRequest &&) = default ;
    DeleteHaVipsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHaVipsRequest() = default ;
    DeleteHaVipsRequest& operator=(const DeleteHaVipsRequest &) = default ;
    DeleteHaVipsRequest& operator=(DeleteHaVipsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->haVipIds_ == nullptr; };
    // haVipIds Field Functions 
    bool hasHaVipIds() const { return this->haVipIds_ != nullptr;};
    void deleteHaVipIds() { this->haVipIds_ = nullptr;};
    inline const vector<string> & getHaVipIds() const { DARABONBA_PTR_GET_CONST(haVipIds_, vector<string>) };
    inline vector<string> getHaVipIds() { DARABONBA_PTR_GET(haVipIds_, vector<string>) };
    inline DeleteHaVipsRequest& setHaVipIds(const vector<string> & haVipIds) { DARABONBA_PTR_SET_VALUE(haVipIds_, haVipIds) };
    inline DeleteHaVipsRequest& setHaVipIds(vector<string> && haVipIds) { DARABONBA_PTR_SET_RVALUE(haVipIds_, haVipIds) };


  protected:
    // The IDs of high-availability virtual IP addresses (HAVIPs).
    // 
    // This parameter is required.
    shared_ptr<vector<string>> haVipIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
