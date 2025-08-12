// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKRESPONSEBODYSTREAMBLOCKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKRESPONSEBODYSTREAMBLOCKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStreamLocationBlockResponseBodyStreamBlockList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamLocationBlockResponseBodyStreamBlockList& obj) { 
      DARABONBA_PTR_TO_JSON(StreamBlock, streamBlock_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamLocationBlockResponseBodyStreamBlockList& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamBlock, streamBlock_);
    };
    DescribeStreamLocationBlockResponseBodyStreamBlockList() = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockList(const DescribeStreamLocationBlockResponseBodyStreamBlockList &) = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockList(DescribeStreamLocationBlockResponseBodyStreamBlockList &&) = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamLocationBlockResponseBodyStreamBlockList() = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockList& operator=(const DescribeStreamLocationBlockResponseBodyStreamBlockList &) = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockList& operator=(DescribeStreamLocationBlockResponseBodyStreamBlockList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->streamBlock_ != nullptr; };
    // streamBlock Field Functions 
    bool hasStreamBlock() const { return this->streamBlock_ != nullptr;};
    void deleteStreamBlock() { this->streamBlock_ = nullptr;};
    inline const vector<Models::DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock> & streamBlock() const { DARABONBA_PTR_GET_CONST(streamBlock_, vector<Models::DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock>) };
    inline vector<Models::DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock> streamBlock() { DARABONBA_PTR_GET(streamBlock_, vector<Models::DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock>) };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockList& setStreamBlock(const vector<Models::DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock> & streamBlock) { DARABONBA_PTR_SET_VALUE(streamBlock_, streamBlock) };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockList& setStreamBlock(vector<Models::DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock> && streamBlock) { DARABONBA_PTR_SET_RVALUE(streamBlock_, streamBlock) };


  protected:
    std::shared_ptr<vector<Models::DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock>> streamBlock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
