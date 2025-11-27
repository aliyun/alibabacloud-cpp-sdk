// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUOUSADJUSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONTINUOUSADJUSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ContinuousAdjustResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinuousAdjustResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ContinuousAdjustResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ContinuousAdjustResponseBody() = default ;
    ContinuousAdjustResponseBody(const ContinuousAdjustResponseBody &) = default ;
    ContinuousAdjustResponseBody(ContinuousAdjustResponseBody &&) = default ;
    ContinuousAdjustResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinuousAdjustResponseBody() = default ;
    ContinuousAdjustResponseBody& operator=(const ContinuousAdjustResponseBody &) = default ;
    ContinuousAdjustResponseBody& operator=(ContinuousAdjustResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->requestId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ContinuousAdjustResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ContinuousAdjustResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
