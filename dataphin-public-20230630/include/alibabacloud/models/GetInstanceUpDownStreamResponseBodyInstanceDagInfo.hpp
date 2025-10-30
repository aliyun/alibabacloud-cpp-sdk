// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMRESPONSEBODYINSTANCEDAGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMRESPONSEBODYINSTANCEDAGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList.hpp>
#include <alibabacloud/models/GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList.hpp>
#include <alibabacloud/models/GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetInstanceUpDownStreamResponseBodyInstanceDagInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceUpDownStreamResponseBodyInstanceDagInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DownInstanceList, downInstanceList_);
      DARABONBA_PTR_TO_JSON(StartInstanceList, startInstanceList_);
      DARABONBA_PTR_TO_JSON(UpInstanceList, upInstanceList_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceUpDownStreamResponseBodyInstanceDagInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DownInstanceList, downInstanceList_);
      DARABONBA_PTR_FROM_JSON(StartInstanceList, startInstanceList_);
      DARABONBA_PTR_FROM_JSON(UpInstanceList, upInstanceList_);
    };
    GetInstanceUpDownStreamResponseBodyInstanceDagInfo() = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfo(const GetInstanceUpDownStreamResponseBodyInstanceDagInfo &) = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfo(GetInstanceUpDownStreamResponseBodyInstanceDagInfo &&) = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceUpDownStreamResponseBodyInstanceDagInfo() = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfo& operator=(const GetInstanceUpDownStreamResponseBodyInstanceDagInfo &) = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfo& operator=(GetInstanceUpDownStreamResponseBodyInstanceDagInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downInstanceList_ == nullptr
        && return this->startInstanceList_ == nullptr && return this->upInstanceList_ == nullptr; };
    // downInstanceList Field Functions 
    bool hasDownInstanceList() const { return this->downInstanceList_ != nullptr;};
    void deleteDownInstanceList() { this->downInstanceList_ = nullptr;};
    inline const vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList> & downInstanceList() const { DARABONBA_PTR_GET_CONST(downInstanceList_, vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList>) };
    inline vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList> downInstanceList() { DARABONBA_PTR_GET(downInstanceList_, vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList>) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfo& setDownInstanceList(const vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList> & downInstanceList) { DARABONBA_PTR_SET_VALUE(downInstanceList_, downInstanceList) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfo& setDownInstanceList(vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList> && downInstanceList) { DARABONBA_PTR_SET_RVALUE(downInstanceList_, downInstanceList) };


    // startInstanceList Field Functions 
    bool hasStartInstanceList() const { return this->startInstanceList_ != nullptr;};
    void deleteStartInstanceList() { this->startInstanceList_ = nullptr;};
    inline const vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList> & startInstanceList() const { DARABONBA_PTR_GET_CONST(startInstanceList_, vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList>) };
    inline vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList> startInstanceList() { DARABONBA_PTR_GET(startInstanceList_, vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList>) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfo& setStartInstanceList(const vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList> & startInstanceList) { DARABONBA_PTR_SET_VALUE(startInstanceList_, startInstanceList) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfo& setStartInstanceList(vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList> && startInstanceList) { DARABONBA_PTR_SET_RVALUE(startInstanceList_, startInstanceList) };


    // upInstanceList Field Functions 
    bool hasUpInstanceList() const { return this->upInstanceList_ != nullptr;};
    void deleteUpInstanceList() { this->upInstanceList_ = nullptr;};
    inline const vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList> & upInstanceList() const { DARABONBA_PTR_GET_CONST(upInstanceList_, vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList>) };
    inline vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList> upInstanceList() { DARABONBA_PTR_GET(upInstanceList_, vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList>) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfo& setUpInstanceList(const vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList> & upInstanceList) { DARABONBA_PTR_SET_VALUE(upInstanceList_, upInstanceList) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfo& setUpInstanceList(vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList> && upInstanceList) { DARABONBA_PTR_SET_RVALUE(upInstanceList_, upInstanceList) };


  protected:
    std::shared_ptr<vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList>> downInstanceList_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList>> startInstanceList_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList>> upInstanceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
