// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERPODLABELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERPODLABELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAckClusterPodLabelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckClusterPodLabelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckClusterPodLabelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAckClusterPodLabelsResponseBody() = default ;
    DescribeAckClusterPodLabelsResponseBody(const DescribeAckClusterPodLabelsResponseBody &) = default ;
    DescribeAckClusterPodLabelsResponseBody(DescribeAckClusterPodLabelsResponseBody &&) = default ;
    DescribeAckClusterPodLabelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckClusterPodLabelsResponseBody() = default ;
    DescribeAckClusterPodLabelsResponseBody& operator=(const DescribeAckClusterPodLabelsResponseBody &) = default ;
    DescribeAckClusterPodLabelsResponseBody& operator=(DescribeAckClusterPodLabelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AckLabels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AckLabels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AckLabels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AckLabels() = default ;
      AckLabels(const AckLabels &) = default ;
      AckLabels(AckLabels &&) = default ;
      AckLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AckLabels() = default ;
      AckLabels& operator=(const AckLabels &) = default ;
      AckLabels& operator=(AckLabels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline AckLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AckLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ackLabels_ == nullptr
        && this->requestId_ == nullptr; };
    // ackLabels Field Functions 
    bool hasAckLabels() const { return this->ackLabels_ != nullptr;};
    void deleteAckLabels() { this->ackLabels_ = nullptr;};
    inline const vector<DescribeAckClusterPodLabelsResponseBody::AckLabels> & getAckLabels() const { DARABONBA_PTR_GET_CONST(ackLabels_, vector<DescribeAckClusterPodLabelsResponseBody::AckLabels>) };
    inline vector<DescribeAckClusterPodLabelsResponseBody::AckLabels> getAckLabels() { DARABONBA_PTR_GET(ackLabels_, vector<DescribeAckClusterPodLabelsResponseBody::AckLabels>) };
    inline DescribeAckClusterPodLabelsResponseBody& setAckLabels(const vector<DescribeAckClusterPodLabelsResponseBody::AckLabels> & ackLabels) { DARABONBA_PTR_SET_VALUE(ackLabels_, ackLabels) };
    inline DescribeAckClusterPodLabelsResponseBody& setAckLabels(vector<DescribeAckClusterPodLabelsResponseBody::AckLabels> && ackLabels) { DARABONBA_PTR_SET_RVALUE(ackLabels_, ackLabels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAckClusterPodLabelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeAckClusterPodLabelsResponseBody::AckLabels>> ackLabels_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
