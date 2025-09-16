// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTSWIFT_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTSWIFT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceDeployResponseBodyResultSwift : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceDeployResponseBodyResultSwift& obj) { 
      DARABONBA_PTR_TO_JSON(topic, topic_);
      DARABONBA_PTR_TO_JSON(zk, zk_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceDeployResponseBodyResultSwift& obj) { 
      DARABONBA_PTR_FROM_JSON(topic, topic_);
      DARABONBA_PTR_FROM_JSON(zk, zk_);
    };
    GetDataSourceDeployResponseBodyResultSwift() = default ;
    GetDataSourceDeployResponseBodyResultSwift(const GetDataSourceDeployResponseBodyResultSwift &) = default ;
    GetDataSourceDeployResponseBodyResultSwift(GetDataSourceDeployResponseBodyResultSwift &&) = default ;
    GetDataSourceDeployResponseBodyResultSwift(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceDeployResponseBodyResultSwift() = default ;
    GetDataSourceDeployResponseBodyResultSwift& operator=(const GetDataSourceDeployResponseBodyResultSwift &) = default ;
    GetDataSourceDeployResponseBodyResultSwift& operator=(GetDataSourceDeployResponseBodyResultSwift &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->topic_ != nullptr
        && this->zk_ != nullptr; };
    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetDataSourceDeployResponseBodyResultSwift& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // zk Field Functions 
    bool hasZk() const { return this->zk_ != nullptr;};
    void deleteZk() { this->zk_ = nullptr;};
    inline string zk() const { DARABONBA_PTR_GET_DEFAULT(zk_, "") };
    inline GetDataSourceDeployResponseBodyResultSwift& setZk(string zk) { DARABONBA_PTR_SET_VALUE(zk_, zk) };


  protected:
    // The topic.
    std::shared_ptr<string> topic_ = nullptr;
    // zk
    std::shared_ptr<string> zk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
