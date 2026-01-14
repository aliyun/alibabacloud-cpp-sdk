// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESWIMMINGLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESWIMMINGLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteSwimmingLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    DeleteSwimmingLaneRequest() = default ;
    DeleteSwimmingLaneRequest(const DeleteSwimmingLaneRequest &) = default ;
    DeleteSwimmingLaneRequest(DeleteSwimmingLaneRequest &&) = default ;
    DeleteSwimmingLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSwimmingLaneRequest() = default ;
    DeleteSwimmingLaneRequest& operator=(const DeleteSwimmingLaneRequest &) = default ;
    DeleteSwimmingLaneRequest& operator=(DeleteSwimmingLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->laneId_ == nullptr && this->namespace_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DeleteSwimmingLaneRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t getLaneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline DeleteSwimmingLaneRequest& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteSwimmingLaneRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the lane.
    // 
    // This parameter is required.
    shared_ptr<int64_t> laneId_ {};
    // The name of the Microservices Engine (MSE) namespace.
    shared_ptr<string> namespace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
