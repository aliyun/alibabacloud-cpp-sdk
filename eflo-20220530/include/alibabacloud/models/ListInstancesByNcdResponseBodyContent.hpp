// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESBYNCDRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESBYNCDRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesByNcdResponseBodyContentInstanceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListInstancesByNcdResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesByNcdResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceInfos, instanceInfos_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxNcd, maxNcd_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesByNcdResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceInfos, instanceInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxNcd, maxNcd_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
    };
    ListInstancesByNcdResponseBodyContent() = default ;
    ListInstancesByNcdResponseBodyContent(const ListInstancesByNcdResponseBodyContent &) = default ;
    ListInstancesByNcdResponseBodyContent(ListInstancesByNcdResponseBodyContent &&) = default ;
    ListInstancesByNcdResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesByNcdResponseBodyContent() = default ;
    ListInstancesByNcdResponseBodyContent& operator=(const ListInstancesByNcdResponseBodyContent &) = default ;
    ListInstancesByNcdResponseBodyContent& operator=(ListInstancesByNcdResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceInfos_ == nullptr
        && return this->instanceType_ == nullptr && return this->maxNcd_ == nullptr && return this->sourceInstanceId_ == nullptr; };
    // instanceInfos Field Functions 
    bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
    void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
    inline const vector<Models::ListInstancesByNcdResponseBodyContentInstanceInfos> & instanceInfos() const { DARABONBA_PTR_GET_CONST(instanceInfos_, vector<Models::ListInstancesByNcdResponseBodyContentInstanceInfos>) };
    inline vector<Models::ListInstancesByNcdResponseBodyContentInstanceInfos> instanceInfos() { DARABONBA_PTR_GET(instanceInfos_, vector<Models::ListInstancesByNcdResponseBodyContentInstanceInfos>) };
    inline ListInstancesByNcdResponseBodyContent& setInstanceInfos(const vector<Models::ListInstancesByNcdResponseBodyContentInstanceInfos> & instanceInfos) { DARABONBA_PTR_SET_VALUE(instanceInfos_, instanceInfos) };
    inline ListInstancesByNcdResponseBodyContent& setInstanceInfos(vector<Models::ListInstancesByNcdResponseBodyContentInstanceInfos> && instanceInfos) { DARABONBA_PTR_SET_RVALUE(instanceInfos_, instanceInfos) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListInstancesByNcdResponseBodyContent& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxNcd Field Functions 
    bool hasMaxNcd() const { return this->maxNcd_ != nullptr;};
    void deleteMaxNcd() { this->maxNcd_ = nullptr;};
    inline int32_t maxNcd() const { DARABONBA_PTR_GET_DEFAULT(maxNcd_, 0) };
    inline ListInstancesByNcdResponseBodyContent& setMaxNcd(int32_t maxNcd) { DARABONBA_PTR_SET_VALUE(maxNcd_, maxNcd) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string sourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline ListInstancesByNcdResponseBodyContent& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


  protected:
    // A collection of instances whose network communication distance from the source instance ID does not exceed maxNcd
    std::shared_ptr<vector<Models::ListInstancesByNcdResponseBodyContentInstanceInfos>> instanceInfos_ = nullptr;
    // Instance Type
    // 
    // Valid value:
    // 
    // *   node: Lingjun node.
    // *   lni: lingjun network interface controller.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Maximum communication distance between nodes
    std::shared_ptr<int32_t> maxNcd_ = nullptr;
    // The ID of the source instance.
    std::shared_ptr<string> sourceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
