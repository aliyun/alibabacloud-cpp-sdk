// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTENDODPS_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTENDODPS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceDeployResponseBodyResultExtendOdps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceDeployResponseBodyResultExtendOdps& obj) { 
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceDeployResponseBodyResultExtendOdps& obj) { 
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
    };
    GetDataSourceDeployResponseBodyResultExtendOdps() = default ;
    GetDataSourceDeployResponseBodyResultExtendOdps(const GetDataSourceDeployResponseBodyResultExtendOdps &) = default ;
    GetDataSourceDeployResponseBodyResultExtendOdps(GetDataSourceDeployResponseBodyResultExtendOdps &&) = default ;
    GetDataSourceDeployResponseBodyResultExtendOdps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceDeployResponseBodyResultExtendOdps() = default ;
    GetDataSourceDeployResponseBodyResultExtendOdps& operator=(const GetDataSourceDeployResponseBodyResultExtendOdps &) = default ;
    GetDataSourceDeployResponseBodyResultExtendOdps& operator=(GetDataSourceDeployResponseBodyResultExtendOdps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->partitions_ != nullptr; };
    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const map<string, string> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, string>) };
    inline map<string, string> partitions() { DARABONBA_PTR_GET(partitions_, map<string, string>) };
    inline GetDataSourceDeployResponseBodyResultExtendOdps& setPartitions(const map<string, string> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline GetDataSourceDeployResponseBodyResultExtendOdps& setPartitions(map<string, string> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


  protected:
    std::shared_ptr<map<string, string>> partitions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
