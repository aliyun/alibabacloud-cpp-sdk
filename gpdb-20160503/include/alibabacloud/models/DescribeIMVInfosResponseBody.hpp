// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMVINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMVINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeIMVInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIMVInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ImvInfos, imvInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIMVInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ImvInfos, imvInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIMVInfosResponseBody() = default ;
    DescribeIMVInfosResponseBody(const DescribeIMVInfosResponseBody &) = default ;
    DescribeIMVInfosResponseBody(DescribeIMVInfosResponseBody &&) = default ;
    DescribeIMVInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIMVInfosResponseBody() = default ;
    DescribeIMVInfosResponseBody& operator=(const DescribeIMVInfosResponseBody &) = default ;
    DescribeIMVInfosResponseBody& operator=(DescribeIMVInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImvInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImvInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Base, base_);
        DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
        DARABONBA_PTR_TO_JSON(MV, MV_);
      };
      friend void from_json(const Darabonba::Json& j, ImvInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Base, base_);
        DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
        DARABONBA_PTR_FROM_JSON(MV, MV_);
      };
      ImvInfos() = default ;
      ImvInfos(const ImvInfos &) = default ;
      ImvInfos(ImvInfos &&) = default ;
      ImvInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImvInfos() = default ;
      ImvInfos& operator=(const ImvInfos &) = default ;
      ImvInfos& operator=(ImvInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->base_ == nullptr
        && this->detailInfo_ == nullptr && this->MV_ == nullptr; };
      // base Field Functions 
      bool hasBase() const { return this->base_ != nullptr;};
      void deleteBase() { this->base_ = nullptr;};
      inline string getBase() const { DARABONBA_PTR_GET_DEFAULT(base_, "") };
      inline ImvInfos& setBase(string base) { DARABONBA_PTR_SET_VALUE(base_, base) };


      // detailInfo Field Functions 
      bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
      void deleteDetailInfo() { this->detailInfo_ = nullptr;};
      inline string getDetailInfo() const { DARABONBA_PTR_GET_DEFAULT(detailInfo_, "") };
      inline ImvInfos& setDetailInfo(string detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };


      // MV Field Functions 
      bool hasMV() const { return this->MV_ != nullptr;};
      void deleteMV() { this->MV_ = nullptr;};
      inline string getMV() const { DARABONBA_PTR_GET_DEFAULT(MV_, "") };
      inline ImvInfos& setMV(string MV) { DARABONBA_PTR_SET_VALUE(MV_, MV) };


    protected:
      // The name of the table based on which the materialized view is created.
      shared_ptr<string> base_ {};
      // The dependency between the materialized view and the base table and all metric values, which can be used to build a lineage graph.
      shared_ptr<string> detailInfo_ {};
      // The name of the materialized view.
      shared_ptr<string> MV_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->imvInfos_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeIMVInfosResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // imvInfos Field Functions 
    bool hasImvInfos() const { return this->imvInfos_ != nullptr;};
    void deleteImvInfos() { this->imvInfos_ = nullptr;};
    inline const vector<DescribeIMVInfosResponseBody::ImvInfos> & getImvInfos() const { DARABONBA_PTR_GET_CONST(imvInfos_, vector<DescribeIMVInfosResponseBody::ImvInfos>) };
    inline vector<DescribeIMVInfosResponseBody::ImvInfos> getImvInfos() { DARABONBA_PTR_GET(imvInfos_, vector<DescribeIMVInfosResponseBody::ImvInfos>) };
    inline DescribeIMVInfosResponseBody& setImvInfos(const vector<DescribeIMVInfosResponseBody::ImvInfos> & imvInfos) { DARABONBA_PTR_SET_VALUE(imvInfos_, imvInfos) };
    inline DescribeIMVInfosResponseBody& setImvInfos(vector<DescribeIMVInfosResponseBody::ImvInfos> && imvInfos) { DARABONBA_PTR_SET_RVALUE(imvInfos_, imvInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIMVInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    shared_ptr<string> DBInstanceId_ {};
    // The queried materialized views.
    shared_ptr<vector<DescribeIMVInfosResponseBody::ImvInfos>> imvInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
