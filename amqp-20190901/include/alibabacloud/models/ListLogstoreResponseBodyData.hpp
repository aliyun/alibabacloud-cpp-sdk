// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTORERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTORERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListLogstoreResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstoreResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Logstores, logstores_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstoreResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Logstores, logstores_);
    };
    ListLogstoreResponseBodyData() = default ;
    ListLogstoreResponseBodyData(const ListLogstoreResponseBodyData &) = default ;
    ListLogstoreResponseBodyData(ListLogstoreResponseBodyData &&) = default ;
    ListLogstoreResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstoreResponseBodyData() = default ;
    ListLogstoreResponseBodyData& operator=(const ListLogstoreResponseBodyData &) = default ;
    ListLogstoreResponseBodyData& operator=(ListLogstoreResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logstores_ == nullptr; };
    // logstores Field Functions 
    bool hasLogstores() const { return this->logstores_ != nullptr;};
    void deleteLogstores() { this->logstores_ = nullptr;};
    inline const vector<string> & logstores() const { DARABONBA_PTR_GET_CONST(logstores_, vector<string>) };
    inline vector<string> logstores() { DARABONBA_PTR_GET(logstores_, vector<string>) };
    inline ListLogstoreResponseBodyData& setLogstores(const vector<string> & logstores) { DARABONBA_PTR_SET_VALUE(logstores_, logstores) };
    inline ListLogstoreResponseBodyData& setLogstores(vector<string> && logstores) { DARABONBA_PTR_SET_RVALUE(logstores_, logstores) };


  protected:
    std::shared_ptr<vector<string>> logstores_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
