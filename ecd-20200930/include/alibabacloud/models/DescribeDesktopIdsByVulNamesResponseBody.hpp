// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPIDSBYVULNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPIDSBYVULNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopIdsByVulNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopIdsByVulNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopItems, desktopItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopIdsByVulNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopItems, desktopItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopIdsByVulNamesResponseBody() = default ;
    DescribeDesktopIdsByVulNamesResponseBody(const DescribeDesktopIdsByVulNamesResponseBody &) = default ;
    DescribeDesktopIdsByVulNamesResponseBody(DescribeDesktopIdsByVulNamesResponseBody &&) = default ;
    DescribeDesktopIdsByVulNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopIdsByVulNamesResponseBody() = default ;
    DescribeDesktopIdsByVulNamesResponseBody& operator=(const DescribeDesktopIdsByVulNamesResponseBody &) = default ;
    DescribeDesktopIdsByVulNamesResponseBody& operator=(DescribeDesktopIdsByVulNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DesktopItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesktopItems& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      };
      friend void from_json(const Darabonba::Json& j, DesktopItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      };
      DesktopItems() = default ;
      DesktopItems(const DesktopItems &) = default ;
      DesktopItems(DesktopItems &&) = default ;
      DesktopItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesktopItems() = default ;
      DesktopItems& operator=(const DesktopItems &) = default ;
      DesktopItems& operator=(DesktopItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopName_ == nullptr; };
      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline DesktopItems& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline DesktopItems& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    protected:
      // The cloud desktop ID.
      shared_ptr<string> desktopId_ {};
      // The cloud desktop name.
      shared_ptr<string> desktopName_ {};
    };

    virtual bool empty() const override { return this->desktopItems_ == nullptr
        && this->requestId_ == nullptr; };
    // desktopItems Field Functions 
    bool hasDesktopItems() const { return this->desktopItems_ != nullptr;};
    void deleteDesktopItems() { this->desktopItems_ = nullptr;};
    inline const vector<DescribeDesktopIdsByVulNamesResponseBody::DesktopItems> & getDesktopItems() const { DARABONBA_PTR_GET_CONST(desktopItems_, vector<DescribeDesktopIdsByVulNamesResponseBody::DesktopItems>) };
    inline vector<DescribeDesktopIdsByVulNamesResponseBody::DesktopItems> getDesktopItems() { DARABONBA_PTR_GET(desktopItems_, vector<DescribeDesktopIdsByVulNamesResponseBody::DesktopItems>) };
    inline DescribeDesktopIdsByVulNamesResponseBody& setDesktopItems(const vector<DescribeDesktopIdsByVulNamesResponseBody::DesktopItems> & desktopItems) { DARABONBA_PTR_SET_VALUE(desktopItems_, desktopItems) };
    inline DescribeDesktopIdsByVulNamesResponseBody& setDesktopItems(vector<DescribeDesktopIdsByVulNamesResponseBody::DesktopItems> && desktopItems) { DARABONBA_PTR_SET_RVALUE(desktopItems_, desktopItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopIdsByVulNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The array of cloud desktop information.
    shared_ptr<vector<DescribeDesktopIdsByVulNamesResponseBody::DesktopItems>> desktopItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
