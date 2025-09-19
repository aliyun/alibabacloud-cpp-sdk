// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceRiskLevelsResponseBodyInstanceRiskLevels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskLevelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRiskLevels, instanceRiskLevels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRiskLevels, instanceRiskLevels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstanceRiskLevelsResponseBody() = default ;
    ListInstanceRiskLevelsResponseBody(const ListInstanceRiskLevelsResponseBody &) = default ;
    ListInstanceRiskLevelsResponseBody(ListInstanceRiskLevelsResponseBody &&) = default ;
    ListInstanceRiskLevelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskLevelsResponseBody() = default ;
    ListInstanceRiskLevelsResponseBody& operator=(const ListInstanceRiskLevelsResponseBody &) = default ;
    ListInstanceRiskLevelsResponseBody& operator=(ListInstanceRiskLevelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceRiskLevels_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceRiskLevels Field Functions 
    bool hasInstanceRiskLevels() const { return this->instanceRiskLevels_ != nullptr;};
    void deleteInstanceRiskLevels() { this->instanceRiskLevels_ = nullptr;};
    inline const vector<ListInstanceRiskLevelsResponseBodyInstanceRiskLevels> & instanceRiskLevels() const { DARABONBA_PTR_GET_CONST(instanceRiskLevels_, vector<ListInstanceRiskLevelsResponseBodyInstanceRiskLevels>) };
    inline vector<ListInstanceRiskLevelsResponseBodyInstanceRiskLevels> instanceRiskLevels() { DARABONBA_PTR_GET(instanceRiskLevels_, vector<ListInstanceRiskLevelsResponseBodyInstanceRiskLevels>) };
    inline ListInstanceRiskLevelsResponseBody& setInstanceRiskLevels(const vector<ListInstanceRiskLevelsResponseBodyInstanceRiskLevels> & instanceRiskLevels) { DARABONBA_PTR_SET_VALUE(instanceRiskLevels_, instanceRiskLevels) };
    inline ListInstanceRiskLevelsResponseBody& setInstanceRiskLevels(vector<ListInstanceRiskLevelsResponseBodyInstanceRiskLevels> && instanceRiskLevels) { DARABONBA_PTR_SET_RVALUE(instanceRiskLevels_, instanceRiskLevels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceRiskLevelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The risk levels of instances.
    std::shared_ptr<vector<ListInstanceRiskLevelsResponseBodyInstanceRiskLevels>> instanceRiskLevels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
