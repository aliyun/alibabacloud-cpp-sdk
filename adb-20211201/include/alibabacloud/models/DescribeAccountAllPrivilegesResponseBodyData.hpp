// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountAllPrivilegesResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountAllPrivilegesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAllPrivilegesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Truncated, truncated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAllPrivilegesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Truncated, truncated_);
    };
    DescribeAccountAllPrivilegesResponseBodyData() = default ;
    DescribeAccountAllPrivilegesResponseBodyData(const DescribeAccountAllPrivilegesResponseBodyData &) = default ;
    DescribeAccountAllPrivilegesResponseBodyData(DescribeAccountAllPrivilegesResponseBodyData &&) = default ;
    DescribeAccountAllPrivilegesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAllPrivilegesResponseBodyData() = default ;
    DescribeAccountAllPrivilegesResponseBodyData& operator=(const DescribeAccountAllPrivilegesResponseBodyData &) = default ;
    DescribeAccountAllPrivilegesResponseBodyData& operator=(DescribeAccountAllPrivilegesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->marker_ == nullptr
        && return this->result_ == nullptr && return this->truncated_ == nullptr; };
    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline DescribeAccountAllPrivilegesResponseBodyData& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::DescribeAccountAllPrivilegesResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::DescribeAccountAllPrivilegesResponseBodyDataResult>) };
    inline vector<Models::DescribeAccountAllPrivilegesResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::DescribeAccountAllPrivilegesResponseBodyDataResult>) };
    inline DescribeAccountAllPrivilegesResponseBodyData& setResult(const vector<Models::DescribeAccountAllPrivilegesResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeAccountAllPrivilegesResponseBodyData& setResult(vector<Models::DescribeAccountAllPrivilegesResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // truncated Field Functions 
    bool hasTruncated() const { return this->truncated_ != nullptr;};
    void deleteTruncated() { this->truncated_ = nullptr;};
    inline bool truncated() const { DARABONBA_PTR_GET_DEFAULT(truncated_, false) };
    inline DescribeAccountAllPrivilegesResponseBodyData& setTruncated(bool truncated) { DARABONBA_PTR_SET_VALUE(truncated_, truncated) };


  protected:
    // Indicates the position where the results are truncated. When a value of `true` is returned for the `Truncated` parameter, this parameter is present and contains the value to use for the Marker parameter in a subsequent call.
    std::shared_ptr<string> marker_ = nullptr;
    // The permissions.
    std::shared_ptr<vector<Models::DescribeAccountAllPrivilegesResponseBodyDataResult>> result_ = nullptr;
    // Indicates whether the results are truncated. If the results are truncated, a value of `true` is returned. In this case, you must call this operation again to obtain all the results until a value of `false` is returned for this parameter.
    std::shared_ptr<bool> truncated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
