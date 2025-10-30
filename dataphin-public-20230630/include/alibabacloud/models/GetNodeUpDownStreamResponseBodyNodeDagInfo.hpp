// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMRESPONSEBODYNODEDAGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETNODEUPDOWNSTREAMRESPONSEBODYNODEDAGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList.hpp>
#include <alibabacloud/models/GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList.hpp>
#include <alibabacloud/models/GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetNodeUpDownStreamResponseBodyNodeDagInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeUpDownStreamResponseBodyNodeDagInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DownStreamNodeList, downStreamNodeList_);
      DARABONBA_PTR_TO_JSON(StartNodeList, startNodeList_);
      DARABONBA_PTR_TO_JSON(UpStreamNodeList, upStreamNodeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeUpDownStreamResponseBodyNodeDagInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DownStreamNodeList, downStreamNodeList_);
      DARABONBA_PTR_FROM_JSON(StartNodeList, startNodeList_);
      DARABONBA_PTR_FROM_JSON(UpStreamNodeList, upStreamNodeList_);
    };
    GetNodeUpDownStreamResponseBodyNodeDagInfo() = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfo(const GetNodeUpDownStreamResponseBodyNodeDagInfo &) = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfo(GetNodeUpDownStreamResponseBodyNodeDagInfo &&) = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeUpDownStreamResponseBodyNodeDagInfo() = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfo& operator=(const GetNodeUpDownStreamResponseBodyNodeDagInfo &) = default ;
    GetNodeUpDownStreamResponseBodyNodeDagInfo& operator=(GetNodeUpDownStreamResponseBodyNodeDagInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downStreamNodeList_ == nullptr
        && return this->startNodeList_ == nullptr && return this->upStreamNodeList_ == nullptr; };
    // downStreamNodeList Field Functions 
    bool hasDownStreamNodeList() const { return this->downStreamNodeList_ != nullptr;};
    void deleteDownStreamNodeList() { this->downStreamNodeList_ = nullptr;};
    inline const vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList> & downStreamNodeList() const { DARABONBA_PTR_GET_CONST(downStreamNodeList_, vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList>) };
    inline vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList> downStreamNodeList() { DARABONBA_PTR_GET(downStreamNodeList_, vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList>) };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfo& setDownStreamNodeList(const vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList> & downStreamNodeList) { DARABONBA_PTR_SET_VALUE(downStreamNodeList_, downStreamNodeList) };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfo& setDownStreamNodeList(vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList> && downStreamNodeList) { DARABONBA_PTR_SET_RVALUE(downStreamNodeList_, downStreamNodeList) };


    // startNodeList Field Functions 
    bool hasStartNodeList() const { return this->startNodeList_ != nullptr;};
    void deleteStartNodeList() { this->startNodeList_ = nullptr;};
    inline const vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList> & startNodeList() const { DARABONBA_PTR_GET_CONST(startNodeList_, vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList>) };
    inline vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList> startNodeList() { DARABONBA_PTR_GET(startNodeList_, vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList>) };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfo& setStartNodeList(const vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList> & startNodeList) { DARABONBA_PTR_SET_VALUE(startNodeList_, startNodeList) };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfo& setStartNodeList(vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList> && startNodeList) { DARABONBA_PTR_SET_RVALUE(startNodeList_, startNodeList) };


    // upStreamNodeList Field Functions 
    bool hasUpStreamNodeList() const { return this->upStreamNodeList_ != nullptr;};
    void deleteUpStreamNodeList() { this->upStreamNodeList_ = nullptr;};
    inline const vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList> & upStreamNodeList() const { DARABONBA_PTR_GET_CONST(upStreamNodeList_, vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList>) };
    inline vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList> upStreamNodeList() { DARABONBA_PTR_GET(upStreamNodeList_, vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList>) };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfo& setUpStreamNodeList(const vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList> & upStreamNodeList) { DARABONBA_PTR_SET_VALUE(upStreamNodeList_, upStreamNodeList) };
    inline GetNodeUpDownStreamResponseBodyNodeDagInfo& setUpStreamNodeList(vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList> && upStreamNodeList) { DARABONBA_PTR_SET_RVALUE(upStreamNodeList_, upStreamNodeList) };


  protected:
    std::shared_ptr<vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList>> downStreamNodeList_ = nullptr;
    std::shared_ptr<vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList>> startNodeList_ = nullptr;
    std::shared_ptr<vector<Models::GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList>> upStreamNodeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
