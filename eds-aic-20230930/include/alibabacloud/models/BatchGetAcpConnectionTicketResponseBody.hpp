// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETACPCONNECTIONTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class BatchGetAcpConnectionTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetAcpConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConnectionModels, instanceConnectionModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetAcpConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConnectionModels, instanceConnectionModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchGetAcpConnectionTicketResponseBody() = default ;
    BatchGetAcpConnectionTicketResponseBody(const BatchGetAcpConnectionTicketResponseBody &) = default ;
    BatchGetAcpConnectionTicketResponseBody(BatchGetAcpConnectionTicketResponseBody &&) = default ;
    BatchGetAcpConnectionTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetAcpConnectionTicketResponseBody() = default ;
    BatchGetAcpConnectionTicketResponseBody& operator=(const BatchGetAcpConnectionTicketResponseBody &) = default ;
    BatchGetAcpConnectionTicketResponseBody& operator=(BatchGetAcpConnectionTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceConnectionModels_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceConnectionModels Field Functions 
    bool hasInstanceConnectionModels() const { return this->instanceConnectionModels_ != nullptr;};
    void deleteInstanceConnectionModels() { this->instanceConnectionModels_ = nullptr;};
    inline const vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels> & instanceConnectionModels() const { DARABONBA_PTR_GET_CONST(instanceConnectionModels_, vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels>) };
    inline vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels> instanceConnectionModels() { DARABONBA_PTR_GET(instanceConnectionModels_, vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels>) };
    inline BatchGetAcpConnectionTicketResponseBody& setInstanceConnectionModels(const vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels> & instanceConnectionModels) { DARABONBA_PTR_SET_VALUE(instanceConnectionModels_, instanceConnectionModels) };
    inline BatchGetAcpConnectionTicketResponseBody& setInstanceConnectionModels(vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels> && instanceConnectionModels) { DARABONBA_PTR_SET_RVALUE(instanceConnectionModels_, instanceConnectionModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetAcpConnectionTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of the instance connection tasks.
    std::shared_ptr<vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels>> instanceConnectionModels_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
