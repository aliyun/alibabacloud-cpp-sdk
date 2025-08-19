// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESIDENTRESOURCEPOOLSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTRESIDENTRESOURCEPOOLSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResidentResourcePool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListResidentResourcePoolsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResidentResourcePoolsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(residentResourcePools, residentResourcePools_);
    };
    friend void from_json(const Darabonba::Json& j, ListResidentResourcePoolsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(residentResourcePools, residentResourcePools_);
    };
    ListResidentResourcePoolsOutput() = default ;
    ListResidentResourcePoolsOutput(const ListResidentResourcePoolsOutput &) = default ;
    ListResidentResourcePoolsOutput(ListResidentResourcePoolsOutput &&) = default ;
    ListResidentResourcePoolsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResidentResourcePoolsOutput() = default ;
    ListResidentResourcePoolsOutput& operator=(const ListResidentResourcePoolsOutput &) = default ;
    ListResidentResourcePoolsOutput& operator=(ListResidentResourcePoolsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->residentResourcePools_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResidentResourcePoolsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // residentResourcePools Field Functions 
    bool hasResidentResourcePools() const { return this->residentResourcePools_ != nullptr;};
    void deleteResidentResourcePools() { this->residentResourcePools_ = nullptr;};
    inline const vector<ResidentResourcePool> & residentResourcePools() const { DARABONBA_PTR_GET_CONST(residentResourcePools_, vector<ResidentResourcePool>) };
    inline vector<ResidentResourcePool> residentResourcePools() { DARABONBA_PTR_GET(residentResourcePools_, vector<ResidentResourcePool>) };
    inline ListResidentResourcePoolsOutput& setResidentResourcePools(const vector<ResidentResourcePool> & residentResourcePools) { DARABONBA_PTR_SET_VALUE(residentResourcePools_, residentResourcePools) };
    inline ListResidentResourcePoolsOutput& setResidentResourcePools(vector<ResidentResourcePool> && residentResourcePools) { DARABONBA_PTR_SET_RVALUE(residentResourcePools_, residentResourcePools) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ResidentResourcePool>> residentResourcePools_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
