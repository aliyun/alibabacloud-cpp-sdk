// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESBYOUTPUTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESBYOUTPUTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodesByOutputResponseBodyDataNodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListNodesByOutputResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesByOutputResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesByOutputResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    ListNodesByOutputResponseBodyData() = default ;
    ListNodesByOutputResponseBodyData(const ListNodesByOutputResponseBodyData &) = default ;
    ListNodesByOutputResponseBodyData(ListNodesByOutputResponseBodyData &&) = default ;
    ListNodesByOutputResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesByOutputResponseBodyData() = default ;
    ListNodesByOutputResponseBodyData& operator=(const ListNodesByOutputResponseBodyData &) = default ;
    ListNodesByOutputResponseBodyData& operator=(ListNodesByOutputResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeList_ != nullptr
        && this->output_ != nullptr; };
    // nodeList Field Functions 
    bool hasNodeList() const { return this->nodeList_ != nullptr;};
    void deleteNodeList() { this->nodeList_ = nullptr;};
    inline const vector<Models::ListNodesByOutputResponseBodyDataNodeList> & nodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, vector<Models::ListNodesByOutputResponseBodyDataNodeList>) };
    inline vector<Models::ListNodesByOutputResponseBodyDataNodeList> nodeList() { DARABONBA_PTR_GET(nodeList_, vector<Models::ListNodesByOutputResponseBodyDataNodeList>) };
    inline ListNodesByOutputResponseBodyData& setNodeList(const vector<Models::ListNodesByOutputResponseBodyDataNodeList> & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
    inline ListNodesByOutputResponseBodyData& setNodeList(vector<Models::ListNodesByOutputResponseBodyDataNodeList> && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline ListNodesByOutputResponseBodyData& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


  protected:
    // The information about the nodes returned.
    std::shared_ptr<vector<Models::ListNodesByOutputResponseBodyDataNodeList>> nodeList_ = nullptr;
    // The output name of the current node.
    std::shared_ptr<string> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
