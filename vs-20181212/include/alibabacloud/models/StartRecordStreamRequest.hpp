// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRECORDSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRECORDSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StartRecordStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRecordStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlayDomain, playDomain_);
    };
    friend void from_json(const Darabonba::Json& j, StartRecordStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlayDomain, playDomain_);
    };
    StartRecordStreamRequest() = default ;
    StartRecordStreamRequest(const StartRecordStreamRequest &) = default ;
    StartRecordStreamRequest(StartRecordStreamRequest &&) = default ;
    StartRecordStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRecordStreamRequest() = default ;
    StartRecordStreamRequest& operator=(const StartRecordStreamRequest &) = default ;
    StartRecordStreamRequest& operator=(StartRecordStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->playDomain_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline StartRecordStreamRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline StartRecordStreamRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StartRecordStreamRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartRecordStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playDomain Field Functions 
    bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
    void deletePlayDomain() { this->playDomain_ = nullptr;};
    inline string getPlayDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
    inline StartRecordStreamRequest& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


  protected:
    shared_ptr<string> app_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> playDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
