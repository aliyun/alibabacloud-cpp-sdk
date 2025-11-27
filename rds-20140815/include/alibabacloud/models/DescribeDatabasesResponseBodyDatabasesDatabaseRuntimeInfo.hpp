// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASERUNTIMEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASERUNTIMEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(RuntimeDbProperty, runtimeDbProperty_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(RuntimeDbProperty, runtimeDbProperty_);
    };
    DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo(const DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo(DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo &&) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo& operator=(const DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo& operator=(DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->runtimeDbProperty_ == nullptr; };
    // runtimeDbProperty Field Functions 
    bool hasRuntimeDbProperty() const { return this->runtimeDbProperty_ != nullptr;};
    void deleteRuntimeDbProperty() { this->runtimeDbProperty_ = nullptr;};
    inline const vector<Darabonba::Json> & runtimeDbProperty() const { DARABONBA_PTR_GET_CONST(runtimeDbProperty_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> runtimeDbProperty() { DARABONBA_PTR_GET(runtimeDbProperty_, vector<Darabonba::Json>) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo& setRuntimeDbProperty(const vector<Darabonba::Json> & runtimeDbProperty) { DARABONBA_PTR_SET_VALUE(runtimeDbProperty_, runtimeDbProperty) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo& setRuntimeDbProperty(vector<Darabonba::Json> && runtimeDbProperty) { DARABONBA_PTR_SET_RVALUE(runtimeDbProperty_, runtimeDbProperty) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> runtimeDbProperty_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
