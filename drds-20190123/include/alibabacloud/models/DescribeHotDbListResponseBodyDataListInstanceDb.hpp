// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTDBLISTRESPONSEBODYDATALISTINSTANCEDB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTDBLISTRESPONSEBODYDATALISTINSTANCEDB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHotDbListResponseBodyDataListInstanceDbHotDbList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeHotDbListResponseBodyDataListInstanceDb : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotDbListResponseBodyDataListInstanceDb& obj) { 
      DARABONBA_PTR_TO_JSON(HotDbList, hotDbList_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotDbListResponseBodyDataListInstanceDb& obj) { 
      DARABONBA_PTR_FROM_JSON(HotDbList, hotDbList_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    DescribeHotDbListResponseBodyDataListInstanceDb() = default ;
    DescribeHotDbListResponseBodyDataListInstanceDb(const DescribeHotDbListResponseBodyDataListInstanceDb &) = default ;
    DescribeHotDbListResponseBodyDataListInstanceDb(DescribeHotDbListResponseBodyDataListInstanceDb &&) = default ;
    DescribeHotDbListResponseBodyDataListInstanceDb(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotDbListResponseBodyDataListInstanceDb() = default ;
    DescribeHotDbListResponseBodyDataListInstanceDb& operator=(const DescribeHotDbListResponseBodyDataListInstanceDb &) = default ;
    DescribeHotDbListResponseBodyDataListInstanceDb& operator=(DescribeHotDbListResponseBodyDataListInstanceDb &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotDbList_ != nullptr
        && this->instanceName_ != nullptr; };
    // hotDbList Field Functions 
    bool hasHotDbList() const { return this->hotDbList_ != nullptr;};
    void deleteHotDbList() { this->hotDbList_ = nullptr;};
    inline const Models::DescribeHotDbListResponseBodyDataListInstanceDbHotDbList & hotDbList() const { DARABONBA_PTR_GET_CONST(hotDbList_, Models::DescribeHotDbListResponseBodyDataListInstanceDbHotDbList) };
    inline Models::DescribeHotDbListResponseBodyDataListInstanceDbHotDbList hotDbList() { DARABONBA_PTR_GET(hotDbList_, Models::DescribeHotDbListResponseBodyDataListInstanceDbHotDbList) };
    inline DescribeHotDbListResponseBodyDataListInstanceDb& setHotDbList(const Models::DescribeHotDbListResponseBodyDataListInstanceDbHotDbList & hotDbList) { DARABONBA_PTR_SET_VALUE(hotDbList_, hotDbList) };
    inline DescribeHotDbListResponseBodyDataListInstanceDb& setHotDbList(Models::DescribeHotDbListResponseBodyDataListInstanceDbHotDbList && hotDbList) { DARABONBA_PTR_SET_RVALUE(hotDbList_, hotDbList) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeHotDbListResponseBodyDataListInstanceDb& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    std::shared_ptr<Models::DescribeHotDbListResponseBodyDataListInstanceDbHotDbList> hotDbList_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
