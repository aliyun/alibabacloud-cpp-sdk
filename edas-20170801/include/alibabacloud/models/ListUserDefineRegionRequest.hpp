// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListUserDefineRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefineRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DebugEnable, debugEnable_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefineRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DebugEnable, debugEnable_);
    };
    ListUserDefineRegionRequest() = default ;
    ListUserDefineRegionRequest(const ListUserDefineRegionRequest &) = default ;
    ListUserDefineRegionRequest(ListUserDefineRegionRequest &&) = default ;
    ListUserDefineRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefineRegionRequest() = default ;
    ListUserDefineRegionRequest& operator=(const ListUserDefineRegionRequest &) = default ;
    ListUserDefineRegionRequest& operator=(ListUserDefineRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debugEnable_ == nullptr; };
    // debugEnable Field Functions 
    bool hasDebugEnable() const { return this->debugEnable_ != nullptr;};
    void deleteDebugEnable() { this->debugEnable_ = nullptr;};
    inline bool debugEnable() const { DARABONBA_PTR_GET_DEFAULT(debugEnable_, false) };
    inline ListUserDefineRegionRequest& setDebugEnable(bool debugEnable) { DARABONBA_PTR_SET_VALUE(debugEnable_, debugEnable) };


  protected:
    // Specifies whether remote debugging is allowed.
    std::shared_ptr<bool> debugEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
