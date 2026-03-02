// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVERINSTANCERESULT_HPP_
#define ALIBABACLOUD_MODELS_SERVERINSTANCERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ServerInstanceResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServerInstanceResult& obj) { 
      DARABONBA_PTR_TO_JSON(intTotal, intTotal_);
      DARABONBA_PTR_TO_JSON(ips, ips_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ServerInstanceResult& obj) { 
      DARABONBA_PTR_FROM_JSON(intTotal, intTotal_);
      DARABONBA_PTR_FROM_JSON(ips, ips_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ServerInstanceResult() = default ;
    ServerInstanceResult(const ServerInstanceResult &) = default ;
    ServerInstanceResult(ServerInstanceResult &&) = default ;
    ServerInstanceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServerInstanceResult() = default ;
    ServerInstanceResult& operator=(const ServerInstanceResult &) = default ;
    ServerInstanceResult& operator=(ServerInstanceResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intTotal_ == nullptr
        && this->ips_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // intTotal Field Functions 
    bool hasIntTotal() const { return this->intTotal_ != nullptr;};
    void deleteIntTotal() { this->intTotal_ = nullptr;};
    inline int32_t getIntTotal() const { DARABONBA_PTR_GET_DEFAULT(intTotal_, 0) };
    inline ServerInstanceResult& setIntTotal(int32_t intTotal) { DARABONBA_PTR_SET_VALUE(intTotal_, intTotal) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline ServerInstanceResult& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline ServerInstanceResult& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ServerInstanceResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ServerInstanceResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int32_t> intTotal_ {};
    shared_ptr<vector<string>> ips_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
