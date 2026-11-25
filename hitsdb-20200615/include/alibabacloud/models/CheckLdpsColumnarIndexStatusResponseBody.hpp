// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKLDPSCOLUMNARINDEXSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKLDPSCOLUMNARINDEXSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class CheckLdpsColumnarIndexStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckLdpsColumnarIndexStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Opened, opened_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckLdpsColumnarIndexStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Opened, opened_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckLdpsColumnarIndexStatusResponseBody() = default ;
    CheckLdpsColumnarIndexStatusResponseBody(const CheckLdpsColumnarIndexStatusResponseBody &) = default ;
    CheckLdpsColumnarIndexStatusResponseBody(CheckLdpsColumnarIndexStatusResponseBody &&) = default ;
    CheckLdpsColumnarIndexStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckLdpsColumnarIndexStatusResponseBody() = default ;
    CheckLdpsColumnarIndexStatusResponseBody& operator=(const CheckLdpsColumnarIndexStatusResponseBody &) = default ;
    CheckLdpsColumnarIndexStatusResponseBody& operator=(CheckLdpsColumnarIndexStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->mode_ == nullptr && this->opened_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CheckLdpsColumnarIndexStatusResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CheckLdpsColumnarIndexStatusResponseBody& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // opened Field Functions 
    bool hasOpened() const { return this->opened_ != nullptr;};
    void deleteOpened() { this->opened_ = nullptr;};
    inline bool getOpened() const { DARABONBA_PTR_GET_DEFAULT(opened_, false) };
    inline CheckLdpsColumnarIndexStatusResponseBody& setOpened(bool opened) { DARABONBA_PTR_SET_VALUE(opened_, opened) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckLdpsColumnarIndexStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // Columnar index mode. Valid values: LAKE and OLAP.
    shared_ptr<string> mode_ {};
    shared_ptr<bool> opened_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
