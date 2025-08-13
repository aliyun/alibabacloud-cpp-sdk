// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSWIMMINGLANEBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSWIMMINGLANEBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QuerySwimmingLaneByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySwimmingLaneByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySwimmingLaneByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    QuerySwimmingLaneByIdRequest() = default ;
    QuerySwimmingLaneByIdRequest(const QuerySwimmingLaneByIdRequest &) = default ;
    QuerySwimmingLaneByIdRequest(QuerySwimmingLaneByIdRequest &&) = default ;
    QuerySwimmingLaneByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySwimmingLaneByIdRequest() = default ;
    QuerySwimmingLaneByIdRequest& operator=(const QuerySwimmingLaneByIdRequest &) = default ;
    QuerySwimmingLaneByIdRequest& operator=(QuerySwimmingLaneByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->laneId_ != nullptr && this->namespace_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline QuerySwimmingLaneByIdRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t laneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline QuerySwimmingLaneByIdRequest& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QuerySwimmingLaneByIdRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the lane.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> laneId_ = nullptr;
    // The name of the Microservices Engine (MSE) namespace.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
