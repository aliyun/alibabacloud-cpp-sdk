// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeDeviceURLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceURLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Auth, auth_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OutProtocol, outProtocol_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceURLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Auth, auth_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OutProtocol, outProtocol_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDeviceURLRequest() = default ;
    DescribeDeviceURLRequest(const DescribeDeviceURLRequest &) = default ;
    DescribeDeviceURLRequest(DescribeDeviceURLRequest &&) = default ;
    DescribeDeviceURLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceURLRequest() = default ;
    DescribeDeviceURLRequest& operator=(const DescribeDeviceURLRequest &) = default ;
    DescribeDeviceURLRequest& operator=(DescribeDeviceURLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auth_ == nullptr
        && this->expire_ == nullptr && this->id_ == nullptr && this->mode_ == nullptr && this->outProtocol_ == nullptr && this->ownerId_ == nullptr
        && this->stream_ == nullptr && this->type_ == nullptr; };
    // auth Field Functions 
    bool hasAuth() const { return this->auth_ != nullptr;};
    void deleteAuth() { this->auth_ = nullptr;};
    inline bool getAuth() const { DARABONBA_PTR_GET_DEFAULT(auth_, false) };
    inline DescribeDeviceURLRequest& setAuth(bool auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline DescribeDeviceURLRequest& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeDeviceURLRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeDeviceURLRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // outProtocol Field Functions 
    bool hasOutProtocol() const { return this->outProtocol_ != nullptr;};
    void deleteOutProtocol() { this->outProtocol_ = nullptr;};
    inline string getOutProtocol() const { DARABONBA_PTR_GET_DEFAULT(outProtocol_, "") };
    inline DescribeDeviceURLRequest& setOutProtocol(string outProtocol) { DARABONBA_PTR_SET_VALUE(outProtocol_, outProtocol) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDeviceURLRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline DescribeDeviceURLRequest& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDeviceURLRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<bool> auth_ {};
    shared_ptr<int64_t> expire_ {};
    // This parameter is required.
    shared_ptr<string> id_ {};
    shared_ptr<string> mode_ {};
    // This parameter is required.
    shared_ptr<string> outProtocol_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> stream_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
