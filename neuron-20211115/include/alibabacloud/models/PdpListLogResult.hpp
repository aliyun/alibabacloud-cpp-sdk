// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPLISTLOGRESULT_HPP_
#define ALIBABACLOUD_MODELS_PDPLISTLOGRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PdpLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpListLogResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpListLogResult& obj) { 
      DARABONBA_PTR_TO_JSON(logs, logs_);
    };
    friend void from_json(const Darabonba::Json& j, PdpListLogResult& obj) { 
      DARABONBA_PTR_FROM_JSON(logs, logs_);
    };
    PdpListLogResult() = default ;
    PdpListLogResult(const PdpListLogResult &) = default ;
    PdpListLogResult(PdpListLogResult &&) = default ;
    PdpListLogResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpListLogResult() = default ;
    PdpListLogResult& operator=(const PdpListLogResult &) = default ;
    PdpListLogResult& operator=(PdpListLogResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logs_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<PdpLog> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<PdpLog>) };
    inline vector<PdpLog> getLogs() { DARABONBA_PTR_GET(logs_, vector<PdpLog>) };
    inline PdpListLogResult& setLogs(const vector<PdpLog> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline PdpListLogResult& setLogs(vector<PdpLog> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


  protected:
    shared_ptr<vector<PdpLog>> logs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
