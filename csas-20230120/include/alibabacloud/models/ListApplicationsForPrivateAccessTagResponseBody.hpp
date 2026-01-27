// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApplicationsForPrivateAccessTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForPrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForPrivateAccessTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListApplicationsForPrivateAccessTagResponseBody() = default ;
    ListApplicationsForPrivateAccessTagResponseBody(const ListApplicationsForPrivateAccessTagResponseBody &) = default ;
    ListApplicationsForPrivateAccessTagResponseBody(ListApplicationsForPrivateAccessTagResponseBody &&) = default ;
    ListApplicationsForPrivateAccessTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForPrivateAccessTagResponseBody() = default ;
    ListApplicationsForPrivateAccessTagResponseBody& operator=(const ListApplicationsForPrivateAccessTagResponseBody &) = default ;
    ListApplicationsForPrivateAccessTagResponseBody& operator=(ListApplicationsForPrivateAccessTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Applications, applications_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Applications, applications_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Applications : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Applications& obj) { 
          DARABONBA_PTR_TO_JSON(Addresses, addresses_);
          DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Applications& obj) { 
          DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
          DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Applications() = default ;
        Applications(const Applications &) = default ;
        Applications(Applications &&) = default ;
        Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Applications() = default ;
        Applications& operator=(const Applications &) = default ;
        Applications& operator=(Applications &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PortRanges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PortRanges& obj) { 
            DARABONBA_PTR_TO_JSON(Begin, begin_);
            DARABONBA_PTR_TO_JSON(End, end_);
          };
          friend void from_json(const Darabonba::Json& j, PortRanges& obj) { 
            DARABONBA_PTR_FROM_JSON(Begin, begin_);
            DARABONBA_PTR_FROM_JSON(End, end_);
          };
          PortRanges() = default ;
          PortRanges(const PortRanges &) = default ;
          PortRanges(PortRanges &&) = default ;
          PortRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PortRanges() = default ;
          PortRanges& operator=(const PortRanges &) = default ;
          PortRanges& operator=(PortRanges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->begin_ == nullptr
        && this->end_ == nullptr; };
          // begin Field Functions 
          bool hasBegin() const { return this->begin_ != nullptr;};
          void deleteBegin() { this->begin_ = nullptr;};
          inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
          inline PortRanges& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


          // end Field Functions 
          bool hasEnd() const { return this->end_ != nullptr;};
          void deleteEnd() { this->end_ = nullptr;};
          inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
          inline PortRanges& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        protected:
          shared_ptr<int32_t> begin_ {};
          shared_ptr<int32_t> end_ {};
        };

        virtual bool empty() const override { return this->addresses_ == nullptr
        && this->applicationId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->portRanges_ == nullptr
        && this->protocol_ == nullptr && this->status_ == nullptr; };
        // addresses Field Functions 
        bool hasAddresses() const { return this->addresses_ != nullptr;};
        void deleteAddresses() { this->addresses_ = nullptr;};
        inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
        inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
        inline Applications& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
        inline Applications& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


        // applicationId Field Functions 
        bool hasApplicationId() const { return this->applicationId_ != nullptr;};
        void deleteApplicationId() { this->applicationId_ = nullptr;};
        inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
        inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Applications& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Applications& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Applications& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // portRanges Field Functions 
        bool hasPortRanges() const { return this->portRanges_ != nullptr;};
        void deletePortRanges() { this->portRanges_ = nullptr;};
        inline const vector<Applications::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<Applications::PortRanges>) };
        inline vector<Applications::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<Applications::PortRanges>) };
        inline Applications& setPortRanges(const vector<Applications::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
        inline Applications& setPortRanges(vector<Applications::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Applications& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Applications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<vector<string>> addresses_ {};
        shared_ptr<string> applicationId_ {};
        // 内网访问应用创建时间。
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<Applications::PortRanges>> portRanges_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->applications_ == nullptr
        && this->tagId_ == nullptr; };
      // applications Field Functions 
      bool hasApplications() const { return this->applications_ != nullptr;};
      void deleteApplications() { this->applications_ = nullptr;};
      inline const vector<Tags::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Tags::Applications>) };
      inline vector<Tags::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<Tags::Applications>) };
      inline Tags& setApplications(const vector<Tags::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
      inline Tags& setApplications(vector<Tags::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline Tags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    protected:
      shared_ptr<vector<Tags::Applications>> applications_ {};
      shared_ptr<string> tagId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tags_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsForPrivateAccessTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListApplicationsForPrivateAccessTagResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListApplicationsForPrivateAccessTagResponseBody::Tags>) };
    inline vector<ListApplicationsForPrivateAccessTagResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListApplicationsForPrivateAccessTagResponseBody::Tags>) };
    inline ListApplicationsForPrivateAccessTagResponseBody& setTags(const vector<ListApplicationsForPrivateAccessTagResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListApplicationsForPrivateAccessTagResponseBody& setTags(vector<ListApplicationsForPrivateAccessTagResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListApplicationsForPrivateAccessTagResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
