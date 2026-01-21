// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARLOGSTORESTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEARLOGSTORESTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ClearLogStoreStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearLogStoreStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Site, site_);
    };
    friend void from_json(const Darabonba::Json& j, ClearLogStoreStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Site, site_);
    };
    ClearLogStoreStorageRequest() = default ;
    ClearLogStoreStorageRequest(const ClearLogStoreStorageRequest &) = default ;
    ClearLogStoreStorageRequest(ClearLogStoreStorageRequest &&) = default ;
    ClearLogStoreStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearLogStoreStorageRequest() = default ;
    ClearLogStoreStorageRequest& operator=(const ClearLogStoreStorageRequest &) = default ;
    ClearLogStoreStorageRequest& operator=(ClearLogStoreStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->site_ == nullptr; };
    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline ClearLogStoreStorageRequest& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


  protected:
    shared_ptr<string> site_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
