// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSLBSPECRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSLBSPECRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QuerySlbSpecResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySlbSpecResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MaxConnection, maxConnection_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewConnectionPerSecond, newConnectionPerSecond_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySlbSpecResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MaxConnection, maxConnection_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewConnectionPerSecond, newConnectionPerSecond_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    QuerySlbSpecResponseBodyData() = default ;
    QuerySlbSpecResponseBodyData(const QuerySlbSpecResponseBodyData &) = default ;
    QuerySlbSpecResponseBodyData(QuerySlbSpecResponseBodyData &&) = default ;
    QuerySlbSpecResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySlbSpecResponseBodyData() = default ;
    QuerySlbSpecResponseBodyData& operator=(const QuerySlbSpecResponseBodyData &) = default ;
    QuerySlbSpecResponseBodyData& operator=(QuerySlbSpecResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->maxConnection_ != nullptr && this->name_ != nullptr && this->newConnectionPerSecond_ != nullptr && this->qps_ != nullptr && this->spec_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline QuerySlbSpecResponseBodyData& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxConnection Field Functions 
    bool hasMaxConnection() const { return this->maxConnection_ != nullptr;};
    void deleteMaxConnection() { this->maxConnection_ = nullptr;};
    inline string maxConnection() const { DARABONBA_PTR_GET_DEFAULT(maxConnection_, "") };
    inline QuerySlbSpecResponseBodyData& setMaxConnection(string maxConnection) { DARABONBA_PTR_SET_VALUE(maxConnection_, maxConnection) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QuerySlbSpecResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newConnectionPerSecond Field Functions 
    bool hasNewConnectionPerSecond() const { return this->newConnectionPerSecond_ != nullptr;};
    void deleteNewConnectionPerSecond() { this->newConnectionPerSecond_ = nullptr;};
    inline string newConnectionPerSecond() const { DARABONBA_PTR_GET_DEFAULT(newConnectionPerSecond_, "") };
    inline QuerySlbSpecResponseBodyData& setNewConnectionPerSecond(string newConnectionPerSecond) { DARABONBA_PTR_SET_VALUE(newConnectionPerSecond_, newConnectionPerSecond) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline string qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, "") };
    inline QuerySlbSpecResponseBodyData& setQps(string qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline QuerySlbSpecResponseBodyData& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The ID of the returned data.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The maximum number of connections.
    std::shared_ptr<string> maxConnection_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> name_ = nullptr;
    // The number of connections per second.
    std::shared_ptr<string> newConnectionPerSecond_ = nullptr;
    // The number of queries per second (QPS).
    std::shared_ptr<string> qps_ = nullptr;
    // The specification of the instance.
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
