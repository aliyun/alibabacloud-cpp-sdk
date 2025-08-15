// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBITOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBITOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ListKyuubiTokenRequest() = default ;
    ListKyuubiTokenRequest(const ListKyuubiTokenRequest &) = default ;
    ListKyuubiTokenRequest(ListKyuubiTokenRequest &&) = default ;
    ListKyuubiTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiTokenRequest() = default ;
    ListKyuubiTokenRequest& operator=(const ListKyuubiTokenRequest &) = default ;
    ListKyuubiTokenRequest& operator=(ListKyuubiTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListKyuubiTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
