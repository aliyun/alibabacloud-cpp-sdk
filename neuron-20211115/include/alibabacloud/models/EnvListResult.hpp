// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_ENVLISTRESULT_HPP_
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
  class EnvListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvListResult& obj) { 
      DARABONBA_PTR_TO_JSON(envList, envList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnvListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(envList, envList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    EnvListResult() = default ;
    EnvListResult(const EnvListResult &) = default ;
    EnvListResult(EnvListResult &&) = default ;
    EnvListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvListResult() = default ;
    EnvListResult& operator=(const EnvListResult &) = default ;
    EnvListResult& operator=(EnvListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envList_ == nullptr
        && this->requestId_ == nullptr; };
    // envList Field Functions 
    bool hasEnvList() const { return this->envList_ != nullptr;};
    void deleteEnvList() { this->envList_ = nullptr;};
    inline const vector<string> & getEnvList() const { DARABONBA_PTR_GET_CONST(envList_, vector<string>) };
    inline vector<string> getEnvList() { DARABONBA_PTR_GET(envList_, vector<string>) };
    inline EnvListResult& setEnvList(const vector<string> & envList) { DARABONBA_PTR_SET_VALUE(envList_, envList) };
    inline EnvListResult& setEnvList(vector<string> && envList) { DARABONBA_PTR_SET_RVALUE(envList_, envList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnvListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> envList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
